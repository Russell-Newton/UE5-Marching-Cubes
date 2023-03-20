// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "Generators.h"
#include "MarchingCubesShadersBlueprintLibrary.generated.h"

USTRUCT(BlueprintType)
struct FMarchingCubesOutput
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	TArray<FVector3f> Vertices;
	UPROPERTY(BlueprintReadOnly)
	TArray<int32> Tris;
};

/**
 * 
 */
UCLASS(MinimalAPI)
class UMarchingCubesShadersBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
	 * Update a UProceduralMeshComponent with MarchingCubes
	 *
	 * @param InNoise		The data used for iso-surface extraction. Ordering: Z, Y, X
	 * @param MeshExtent	How many grid points to have in each direction
	 * @param MeshSpacing	The size (x, y, z) of a single cell
	 * @param IsoLevel		The IsoLevel to use for MarchingCubes
	 * @param MeshToUpdate	The mesh to update
	 */
	UFUNCTION(
		BlueprintCallable,
		Category = "Marching Cubes",
		meta = (WorldContext = "WorldContextObject"),
		DisplayName = "Update Procedural Mesh with Marching Cubes"
	)
	static void UpdateMesh_MarchingCubes(
		const TArray<float>& InNoise,
		const FIntVector MeshExtent,
		const FVector3f MeshSpacing,
		const float IsoLevel,
		UProceduralMeshComponent* MeshToUpdate
	);

	UFUNCTION(
		BlueprintCallable,
		Category = "Marching Cubes",
		meta = (WorldContext = "WorldContextObject"),
		DisplayName = "Generate Noise List (Cube)"
	)
	static TArray<float> NoiseGenCube(
		const FIntVector Extent
	)
	{
		return NoiseGen<FCubeGenCS>(Extent);
	}

	UFUNCTION(
		BlueprintCallable,
		Category = "Marching Cubes",
		meta = (WorldContext = "WorldContextObject"),
		DisplayName = "Generate Noise List (Sphere)"
	)
	static TArray<float> NoiseGenSphere(
		const FIntVector Extent
	)
	{
		return NoiseGen<FSphereGenCS>(Extent);
	}

	template <typename NoiseGenCS>
	static TArray<float> NoiseGen(const FIntVector Extent);
};
