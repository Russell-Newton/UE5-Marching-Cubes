#pragma once

#include "RenderGraph.h"

BEGIN_SHADER_PARAMETER_STRUCT(FNoiseGenParameters,)
	SHADER_PARAMETER(FIntVector, Extent)
	SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<float>, OutNoise)
END_SHADER_PARAMETER_STRUCT()

template<typename NoiseGenCS>
struct TNoiseGeneratorCS : NoiseGenCS
{
	void AddGraphPass(FRDGBuilder& GraphBuilder, const FIntVector Extent,
		const FRDGBufferUAVRef OutNoise);
};

class FCubeGenCS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FCubeGenCS)
	SHADER_USE_PARAMETER_STRUCT(FCubeGenCS, FGlobalShader);

	using FParameters = FNoiseGenParameters;

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}
};

class FSphereGenCS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FSphereGenCS)
	SHADER_USE_PARAMETER_STRUCT(FSphereGenCS, FGlobalShader);

	using FParameters = FNoiseGenParameters;

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}
};
