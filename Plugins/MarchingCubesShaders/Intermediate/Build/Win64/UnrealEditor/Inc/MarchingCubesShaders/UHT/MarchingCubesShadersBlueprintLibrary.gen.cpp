// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarchingCubesShaders/Public/MarchingCubesShadersBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarchingCubesShadersBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MARCHINGCUBESSHADERS_API UClass* Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary();
	MARCHINGCUBESSHADERS_API UClass* Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_NoRegister();
	MARCHINGCUBESSHADERS_API UScriptStruct* Z_Construct_UScriptStruct_FMarchingCubesOutput();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MarchingCubesShaders();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MarchingCubesOutput;
class UScriptStruct* FMarchingCubesOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MarchingCubesOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MarchingCubesOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarchingCubesOutput, Z_Construct_UPackage__Script_MarchingCubesShaders(), TEXT("MarchingCubesOutput"));
	}
	return Z_Registration_Info_UScriptStruct_MarchingCubesOutput.OuterSingleton;
}
template<> MARCHINGCUBESSHADERS_API UScriptStruct* StaticStruct<FMarchingCubesOutput>()
{
	return FMarchingCubesOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Tris_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tris_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tris;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MarchingCubesShadersBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarchingCubesOutput>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "MarchingCubesOutput" },
		{ "ModuleRelativePath", "Public/MarchingCubesShadersBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMarchingCubesOutput, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Tris_Inner = { "Tris", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Tris_MetaData[] = {
		{ "Category", "MarchingCubesOutput" },
		{ "ModuleRelativePath", "Public/MarchingCubesShadersBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Tris = { "Tris", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMarchingCubesOutput, Tris), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Tris_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Tris_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Tris_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewProp_Tris,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MarchingCubesShaders,
		nullptr,
		&NewStructOps,
		"MarchingCubesOutput",
		sizeof(FMarchingCubesOutput),
		alignof(FMarchingCubesOutput),
		Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMarchingCubesOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_MarchingCubesOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MarchingCubesOutput.InnerSingleton, Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MarchingCubesOutput.InnerSingleton;
	}
	DEFINE_FUNCTION(UMarchingCubesShadersBlueprintLibrary::execNoiseGenSphere)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UMarchingCubesShadersBlueprintLibrary::NoiseGenSphere(Z_Param_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMarchingCubesShadersBlueprintLibrary::execNoiseGenCube)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UMarchingCubesShadersBlueprintLibrary::NoiseGenCube(Z_Param_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMarchingCubesShadersBlueprintLibrary::execUpdateMesh_MarchingCubes)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_InNoise);
		P_GET_STRUCT(FIntVector,Z_Param_MeshExtent);
		P_GET_STRUCT(FVector3f,Z_Param_MeshSpacing);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IsoLevel);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_MeshToUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMarchingCubesShadersBlueprintLibrary::UpdateMesh_MarchingCubes(Z_Param_Out_InNoise,Z_Param_MeshExtent,Z_Param_MeshSpacing,Z_Param_IsoLevel,Z_Param_MeshToUpdate);
		P_NATIVE_END;
	}
	void UMarchingCubesShadersBlueprintLibrary::StaticRegisterNativesUMarchingCubesShadersBlueprintLibrary()
	{
		UClass* Class = UMarchingCubesShadersBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NoiseGenCube", &UMarchingCubesShadersBlueprintLibrary::execNoiseGenCube },
			{ "NoiseGenSphere", &UMarchingCubesShadersBlueprintLibrary::execNoiseGenSphere },
			{ "UpdateMesh_MarchingCubes", &UMarchingCubesShadersBlueprintLibrary::execUpdateMesh_MarchingCubes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics
	{
		struct MarchingCubesShadersBlueprintLibrary_eventNoiseGenCube_Parms
		{
			FIntVector Extent;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventNoiseGenCube_Parms, Extent), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_Extent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventNoiseGenCube_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::Function_MetaDataParams[] = {
		{ "Category", "Marching Cubes" },
		{ "DisplayName", "Generate Noise List (Cube)" },
		{ "ModuleRelativePath", "Public/MarchingCubesShadersBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary, nullptr, "NoiseGenCube", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::MarchingCubesShadersBlueprintLibrary_eventNoiseGenCube_Parms), Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics
	{
		struct MarchingCubesShadersBlueprintLibrary_eventNoiseGenSphere_Parms
		{
			FIntVector Extent;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventNoiseGenSphere_Parms, Extent), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_Extent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventNoiseGenSphere_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Marching Cubes" },
		{ "DisplayName", "Generate Noise List (Sphere)" },
		{ "ModuleRelativePath", "Public/MarchingCubesShadersBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary, nullptr, "NoiseGenSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::MarchingCubesShadersBlueprintLibrary_eventNoiseGenSphere_Parms), Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics
	{
		struct MarchingCubesShadersBlueprintLibrary_eventUpdateMesh_MarchingCubes_Parms
		{
			TArray<float> InNoise;
			FIntVector MeshExtent;
			FVector3f MeshSpacing;
			float IsoLevel;
			UProceduralMeshComponent* MeshToUpdate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNoise_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNoise_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsoLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IsoLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshToUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_InNoise_Inner = { "InNoise", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_InNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_InNoise = { "InNoise", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventUpdateMesh_MarchingCubes_Parms, InNoise), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_InNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_InNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshExtent = { "MeshExtent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventUpdateMesh_MarchingCubes_Parms, MeshExtent), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshSpacing = { "MeshSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventUpdateMesh_MarchingCubes_Parms, MeshSpacing), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_IsoLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_IsoLevel = { "IsoLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventUpdateMesh_MarchingCubes_Parms, IsoLevel), METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_IsoLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_IsoLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshToUpdate_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshToUpdate = { "MeshToUpdate", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MarchingCubesShadersBlueprintLibrary_eventUpdateMesh_MarchingCubes_Parms, MeshToUpdate), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshToUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshToUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_InNoise_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_InNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_IsoLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::NewProp_MeshToUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Marching Cubes" },
		{ "Comment", "/**\n\x09 * Update a UProceduralMeshComponent with MarchingCubes\n\x09 *\n\x09 * @param InNoise\x09\x09The data used for iso-surface extraction. Ordering: Z, Y, X\n\x09 * @param MeshExtent\x09How many grid points to have in each direction\n\x09 * @param MeshSpacing\x09The size (x, y, z) of a single cell\n\x09 * @param IsoLevel\x09\x09The IsoLevel to use for MarchingCubes\n\x09 * @param MeshToUpdate\x09The mesh to update\n\x09 */" },
		{ "DisplayName", "Update Procedural Mesh with Marching Cubes" },
		{ "ModuleRelativePath", "Public/MarchingCubesShadersBlueprintLibrary.h" },
		{ "ToolTip", "Update a UProceduralMeshComponent with MarchingCubes\n\n@param InNoise               The data used for iso-surface extraction. Ordering: Z, Y, X\n@param MeshExtent    How many grid points to have in each direction\n@param MeshSpacing   The size (x, y, z) of a single cell\n@param IsoLevel              The IsoLevel to use for MarchingCubes\n@param MeshToUpdate  The mesh to update" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary, nullptr, "UpdateMesh_MarchingCubes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::MarchingCubesShadersBlueprintLibrary_eventUpdateMesh_MarchingCubes_Parms), Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarchingCubesShadersBlueprintLibrary);
	UClass* Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_NoRegister()
	{
		return UMarchingCubesShadersBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MarchingCubesShaders,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenCube, "NoiseGenCube" }, // 1887984436
		{ &Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_NoiseGenSphere, "NoiseGenSphere" }, // 4066924899
		{ &Z_Construct_UFunction_UMarchingCubesShadersBlueprintLibrary_UpdateMesh_MarchingCubes, "UpdateMesh_MarchingCubes" }, // 249680749
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MarchingCubesShadersBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MarchingCubesShadersBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarchingCubesShadersBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::ClassParams = {
		&UMarchingCubesShadersBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMarchingCubesShadersBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarchingCubesShadersBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMarchingCubesShadersBlueprintLibrary.OuterSingleton;
	}
	template<> MARCHINGCUBESSHADERS_API UClass* StaticClass<UMarchingCubesShadersBlueprintLibrary>()
	{
		return UMarchingCubesShadersBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarchingCubesShadersBlueprintLibrary);
	UMarchingCubesShadersBlueprintLibrary::~UMarchingCubesShadersBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMarchingCubesOutput::StaticStruct, Z_Construct_UScriptStruct_FMarchingCubesOutput_Statics::NewStructOps, TEXT("MarchingCubesOutput"), &Z_Registration_Info_UScriptStruct_MarchingCubesOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMarchingCubesOutput), 2672361433U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMarchingCubesShadersBlueprintLibrary, UMarchingCubesShadersBlueprintLibrary::StaticClass, TEXT("UMarchingCubesShadersBlueprintLibrary"), &Z_Registration_Info_UClass_UMarchingCubesShadersBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarchingCubesShadersBlueprintLibrary), 3598280377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_2750876504(TEXT("/Script/MarchingCubesShaders"),
		Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_MarchingCubes_Plugins_MarchingCubesShaders_Source_MarchingCubesShaders_Public_MarchingCubesShadersBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
