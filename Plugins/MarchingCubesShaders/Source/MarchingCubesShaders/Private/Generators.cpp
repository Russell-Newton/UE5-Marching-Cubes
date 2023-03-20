#include "Generators.h"

IMPLEMENT_GLOBAL_SHADER(FCubeGenCS, "/Plugin/MarchingCubesShaders/Private/Generators.usf", "Cube", SF_Compute);
IMPLEMENT_GLOBAL_SHADER(FSphereGenCS, "/Plugin/MarchingCubesShaders/Private/Generators.usf", "Sphere", SF_Compute);

template <typename NoiseGenCS>
void TNoiseGeneratorCS<NoiseGenCS>::AddGraphPass(FRDGBuilder& GraphBuilder, const FIntVector Extent,
	const FRDGBufferUAVRef OutNoise)
{
	const auto ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	const TShaderMapRef<NoiseGenCS> ComputeShader(ShaderMap);
	FNoiseGenParameters* Parameters = GraphBuilder.AllocParameters<FNoiseGenParameters>();
	Parameters->Extent = Extent;
	Parameters->OutNoise = OutNoise;

	FComputeShaderUtils::AddPass(
		GraphBuilder,
		RDG_EVENT_NAME("Noise Gen"),
		ComputeShader,
		Parameters,
		FComputeShaderUtils::GetGroupCount(Extent, FIntVector(8, 8, 8))
	);
}
