// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RenderGraph.h"

class FMarchingCubesPreProcCS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FMarchingCubesPreProcCS);
	SHADER_USE_PARAMETER_STRUCT(FMarchingCubesPreProcCS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters,)
		SHADER_PARAMETER_RDG_BUFFER_SRV(StructuredBuffer<float>, InNoise)
		SHADER_PARAMETER(FIntVector, Extent)
		SHADER_PARAMETER(FVector3f, Spacing)
		SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<FVector>, OutNormals)
	END_SHADER_PARAMETER_STRUCT()
};

class FMarchingCubesCS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FMarchingCubesCS);
	SHADER_USE_PARAMETER_STRUCT(FMarchingCubesCS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters,)
		SHADER_PARAMETER_RDG_BUFFER_SRV(StructuredBuffer<float>, InNoise)
		SHADER_PARAMETER_RDG_BUFFER_SRV(StructuredBuffer<FVector>, InNormals)
		SHADER_PARAMETER(FIntVector, Extent)
		SHADER_PARAMETER(FVector3f, Spacing)
		SHADER_PARAMETER(float, IsoLevel)
		SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<FVector>, OutVertices)
		SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<int>, OutTris)
		SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<FVector>, OutNormals)
	END_SHADER_PARAMETER_STRUCT()

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}
};

static void AddMarchingCubesPreProcGraphPass(
	FRDGBuilder& GraphBuilder,
	const FRDGBufferSRVRef InNoise,
	const FIntVector Extent,
	const FVector3f Spacing,
	const FRDGBufferUAVRef OutNormals
);

static void AddMarchingCubesGraphPass(
	FRDGBuilder& GraphBuilder,
	const FRDGBufferSRVRef InNoise,
	const FRDGBufferSRVRef InNormals,
	const FIntVector Extent,
	const FVector3f Spacing,
	const float IsoLevel,
	const FRDGBufferUAVRef OutVertices,
	const FRDGBufferUAVRef OutTris,
	const FRDGBufferUAVRef OutNormals
);
