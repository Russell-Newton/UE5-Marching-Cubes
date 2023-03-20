// Fill out your copyright notice in the Description page of Project Settings.


#include "MarchingCubesShadersBlueprintLibrary.h"

#include "CommonRenderResources.h"
#include "MarchingCubesCS.h"
#include "RenderGraph.h"


DEFINE_LOG_CATEGORY_STATIC(LogMarchingCubes, Log, All);

BEGIN_SHADER_PARAMETER_STRUCT(FExtractBufferParameters,)
	RDG_BUFFER_ACCESS(Source, ERHIAccess::CopySrc)
END_SHADER_PARAMETER_STRUCT()

static void AddExtractBufferPass(FRDGBuilder& GraphBuilder, const FRDGBufferRef Source, void* Dest, SIZE_T DataSize)
{
	FExtractBufferParameters* Parameters = GraphBuilder.AllocParameters<FExtractBufferParameters>();
	Parameters->Source = Source;

	GraphBuilder.AddPass(
		RDG_EVENT_NAME("PooledBufferDownload(%s)", Source->Name),
		Parameters,
		ERDGPassFlags::Copy | ERDGPassFlags::NeverCull,
		[Parameters, Dest, DataSize](FRHICommandListImmediate& RHICmdList)
		{
			void* PSource = RHICmdList.LockBuffer(Parameters->Source->GetRHI(), 0, DataSize, RLM_ReadOnly);
			FMemory::Memcpy(Dest, PSource, DataSize);
			RHICmdList.UnlockBuffer(Parameters->Source->GetRHI());
		}
	);
}

void ExecuteGPU(
	FRHICommandListImmediate& RHICmdList,
	TArray<FVector3f>& OutVertices,
	TArray<int32>& OutTris,
	TArray<FVector3f>& OutNormals,
	const TArray<float>& InNoise,
	const FIntVector MeshExtent,
	const FVector3f MeshSpacing,
	const float IsoLevel,
	const int NumVertices,
	const int NumTris
)
{
	FRDGBuilder GraphBuilder(RHICmdList);

	const FRDGBufferRef InNoiseBuffer = CreateStructuredBuffer(
		GraphBuilder,
		TEXT("InNoise_StructuredBuffer"),
		sizeof(float),
		InNoise.Num(),
		InNoise.GetData(),
		sizeof(float) * InNoise.Num()
	);
	const FRDGBufferSRVRef InNoiseSRV = GraphBuilder.CreateSRV(InNoiseBuffer, PF_R32_UINT);

	// UE_LOG(LogMarchingCubes, Log, TEXT("%d"), OutVertices.Num());

	const FRDGBufferRef OutVerticesBuffer = CreateStructuredBuffer(
		GraphBuilder,
		TEXT("OutVertices_StructuredBuffer"),
		sizeof(FVector3f),
		NumVertices,
		OutVertices.GetData(),
		NumVertices * sizeof(FVector3f)
	);
	const FRDGBufferUAVRef OutVerticesUAV = GraphBuilder.CreateUAV(OutVerticesBuffer);

	const FRDGBufferRef OutTrisBuffer = CreateStructuredBuffer(
		GraphBuilder,
		TEXT("OutTris_StructuredBuffer"),
		sizeof(int32),
		NumTris,
		OutTris.GetData(),
		NumTris * sizeof(int32)
	);
	const FRDGBufferUAVRef OutTrisUAV = GraphBuilder.CreateUAV(OutTrisBuffer);

	const FRDGBufferRef GridNormalsBuffer = CreateStructuredBuffer(
		GraphBuilder,
		TEXT("GridNormals_StructuredBuffer"),
		sizeof(FVector3f),
		MeshExtent.X * MeshExtent.Y * MeshExtent.Z,
		nullptr,
		0
	);
	const FRDGBufferUAVRef GridNormalsUAV = GraphBuilder.CreateUAV(GridNormalsBuffer);
	const FRDGBufferSRVRef GridNormalsSRV = GraphBuilder.CreateSRV(GridNormalsBuffer);

	const FRDGBufferRef OutNormalsBuffer = CreateStructuredBuffer(
		GraphBuilder,
		TEXT("OutNormals_StructuredBuffer"),
		sizeof(FVector3f),
		NumVertices,
		OutNormals.GetData(),
		NumVertices * sizeof(FVector3f)
	);
	const FRDGBufferUAVRef OutNormalsUAV = GraphBuilder.CreateUAV(OutNormalsBuffer);

	AddMarchingCubesPreProcGraphPass(
		GraphBuilder,
		InNoiseSRV,
		MeshExtent,
		MeshSpacing,
		GridNormalsUAV
	);
	AddMarchingCubesGraphPass(
		GraphBuilder,
		InNoiseSRV,
		GridNormalsSRV,
		MeshExtent,
		MeshSpacing,
		IsoLevel,
		OutVerticesUAV,
		OutTrisUAV,
		OutNormalsUAV
	);
	AddExtractBufferPass(GraphBuilder, OutVerticesBuffer, OutVertices.GetData(), NumVertices * sizeof(FVector3f));
	AddExtractBufferPass(GraphBuilder, OutTrisBuffer, OutTris.GetData(), NumTris * sizeof(int32));
	AddExtractBufferPass(GraphBuilder, OutNormalsBuffer, OutNormals.GetData(), NumVertices * sizeof(FVector3f));

	GraphBuilder.Execute();
}


void UMarchingCubesShadersBlueprintLibrary::UpdateMesh_MarchingCubes(
	const TArray<float>& InNoise,
	const FIntVector MeshExtent,
	const FVector3f MeshSpacing,
	const float IsoLevel,
	UProceduralMeshComponent* MeshToUpdate
)
{
	const int NumVertices = (MeshExtent.X - 1) * MeshExtent.Y * MeshExtent.Z +
		MeshExtent.X * (MeshExtent.Y - 1) * MeshExtent.Z +
		MeshExtent.X * MeshExtent.Y * (MeshExtent.Z - 1);
	const int NumCells = (MeshExtent.X - 1) * (MeshExtent.Y - 1) * (MeshExtent.Z - 1);
	const int NumTris = NumCells * 3 * 5;
	
	TArray<FVector3f> OutVertices;
	TArray<int32> OutTris;
	TArray<FVector3f> OutNormals;
	OutVertices.Init(FVector3f(-1, -1, -1), NumVertices);
	OutTris.Init(-1, NumTris);
	OutNormals.Init(FVector3f(0, 0, 0), NumVertices);

	// UE_LOG(LogMarchingCubes, Log, TEXT("NumVertices: %d NumCells: %d NumTris: %d"), NumVertices, NumCells, NumTris);

	ENQUEUE_RENDER_COMMAND(ComputeShader)(
		[&OutVertices, &OutTris, &OutNormals, InNoise, MeshExtent, MeshSpacing, IsoLevel, NumVertices, NumTris](
		FRHICommandListImmediate& RHICmdList)
		{
			ExecuteGPU(
				RHICmdList,
				OutVertices,
				OutTris,
				OutNormals,
				InNoise,
				MeshExtent,
				MeshSpacing,
				IsoLevel,
				NumVertices,
				NumTris
			);
		}
	);

	FlushRenderingCommands();
	// UE_LOG(LogMarchingCubes, Log, TEXT("%d"), OutVertices.Num());
	
	// for (int i = 0; i < OutTris.Num(); i += 3)
	// {
	// 	UE_LOG(LogMarchingCubes, Log, TEXT("%d-%d-%d"), OutTris[i], OutTris[i + 1], OutTris[i + 2]);
	// }
	
	OutTris = OutTris.FilterByPredicate([](int idx) { return idx != -1; });
	TArray<FVector2D> UV0;
	UV0.Init(FVector2D(0, 0), OutTris.Num());
	TArray<FLinearColor> Colors;
	Colors.Init(FLinearColor(0, 0, 0, 1), OutTris.Num());
	TArray<FProcMeshTangent> Tangents;
	Tangents.Init(FProcMeshTangent(1, 0, 0), OutTris.Num());

	TArray<FVector> Verts;
	TArray<FVector> Normals;
	for (int i = 0; i < NumVertices; i++)
	{
		const FVector3f OutVertex = OutVertices[i];
		const FVector3f OutNormal = OutNormals[i];
		Verts.Add(FVector(OutVertex.X, OutVertex.Y, OutVertex.Z));
		Normals.Add(FVector(OutNormal.X, OutNormal.Y, OutNormal.Z));
	}
	
	// UE_LOG(LogMarchingCubes, Log, TEXT("%d, %d"), Verts.Num(), OutTris.Num() / 3);
	// for (const FVector Vert : Verts)
	// {
	// 	UE_LOG(LogMarchingCubes, Log, TEXT("%s"), *Vert.ToString());
	// }
	
	// for (int i = 0; i < OutTris.Num(); i += 3)
	// {
	// 	UE_LOG(LogMarchingCubes, Log, TEXT("%d-%d-%d"), OutTris[i], OutTris[i + 1], OutTris[i + 2]);
	// }

	MeshToUpdate->CreateMeshSection_LinearColor(0, Verts, OutTris, Normals, UV0, Colors, Tangents, false);
}

template <typename NoiseGenCS>
void NoiseGenGPU(
	FRHICommandListImmediate& RHICmdList,
	TArray<float>& OutNoise,
	const FIntVector Extent
)
{
	FRDGBuilder GraphBuilder(RHICmdList);
	
	const int NumPoints = Extent.X * Extent.Y * Extent.Z;
	
	const FRDGBufferRef OutNoiseBuffer = CreateStructuredBuffer(
		GraphBuilder,
		TEXT("OutNoise_StructuredBuffer"),
		sizeof(float),
		NumPoints,
		OutNoise.GetData(),
		NumPoints * sizeof(float)
	);
	const FRDGBufferUAVRef OutNoiseUAV = GraphBuilder.CreateUAV(OutNoiseBuffer);

	TNoiseGeneratorCS<NoiseGenCS>().AddGraphPass(GraphBuilder, Extent, OutNoiseUAV);
	AddExtractBufferPass(GraphBuilder, OutNoiseBuffer, OutNoise.GetData(), NumPoints * sizeof(float));

	GraphBuilder.Execute();
}

template <typename NoiseGenCS>
TArray<float> UMarchingCubesShadersBlueprintLibrary::NoiseGen(const FIntVector Extent)
{
	const int NumPoints = Extent.X * Extent.Y * Extent.Z;
	
	TArray<float> OutNoise;
	OutNoise.Init(0, NumPoints);

	ENQUEUE_RENDER_COMMAND(ComputeShader)(
		[&OutNoise, Extent](
		FRHICommandListImmediate& RHICmdList)
		{
			NoiseGenGPU<NoiseGenCS>(
				RHICmdList,
				OutNoise,
				Extent
			);
		}
	);
	
	FlushRenderingCommands();

	return OutNoise;
}
