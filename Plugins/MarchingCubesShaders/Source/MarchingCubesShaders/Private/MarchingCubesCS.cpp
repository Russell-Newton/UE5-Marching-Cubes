// Fill out your copyright notice in the Description page of Project Settings.


#include "MarchingCubesCS.h"

IMPLEMENT_GLOBAL_SHADER(FMarchingCubesPreProcCS, "/Plugin/MarchingCubesShaders/Private/MCPreProc.usf", "CalcNormals", SF_Compute);
IMPLEMENT_GLOBAL_SHADER(FMarchingCubesCS, "/Plugin/MarchingCubesShaders/Private/MarchingCubes.usf", "March", SF_Compute);

void AddMarchingCubesGraphPass(
	FRDGBuilder& GraphBuilder,
	const FRDGBufferSRVRef InNoise,
	const FRDGBufferSRVRef InNormals,
	const FIntVector3 Extent,
	const FVector3f Spacing,
	const float IsoLevel,
	const FRDGBufferUAVRef OutVertices,
	const FRDGBufferUAVRef OutTris,
	const FRDGBufferUAVRef OutNormals
	)
{
	const auto ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	const TShaderMapRef<FMarchingCubesCS> ComputeShader(ShaderMap);

	FMarchingCubesCS::FParameters* CSParameters = GraphBuilder.AllocParameters<FMarchingCubesCS::FParameters>();
	CSParameters->InNoise = InNoise;
	CSParameters->InNormals = InNormals;
	CSParameters->Extent = Extent;
	CSParameters->Spacing = Spacing;
	CSParameters->IsoLevel = IsoLevel;
	CSParameters->OutVertices = OutVertices;
	CSParameters->OutTris = OutTris;
	CSParameters->OutNormals = OutNormals;

	FComputeShaderUtils::AddPass(
		GraphBuilder,
		RDG_EVENT_NAME("Marching Cubes"),
		ComputeShader,
		CSParameters,
		FComputeShaderUtils::GetGroupCount(Extent, FIntVector(8, 8, 8))
	);
}


void AddMarchingCubesPreProcGraphPass(FRDGBuilder& GraphBuilder, const FRDGBufferSRVRef InNoise,
	const FIntVector Extent, const FVector3f Spacing, const FRDGBufferUAVRef OutNormals)
{
	const auto ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	const TShaderMapRef<FMarchingCubesPreProcCS> ComputeShader(ShaderMap);

	FMarchingCubesPreProcCS::FParameters* Parameters = GraphBuilder.AllocParameters<FMarchingCubesPreProcCS::FParameters>();
	Parameters->InNoise = InNoise;
	Parameters->Extent = Extent;
	Parameters->Spacing = Spacing;
	Parameters->OutNormals = OutNormals;

	FComputeShaderUtils::AddPass(
		GraphBuilder,
		RDG_EVENT_NAME("Marching Cubes Pre-Processing"),
		ComputeShader,
		Parameters,
		FComputeShaderUtils::GetGroupCount(Extent, FIntVector(8, 8, 8))
	);
}
