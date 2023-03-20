// Copyright Epic Games, Inc. All Rights Reserved.

#include "MarchingCubesShaders.h"

#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FMarchingCubesShadersModule"

void FMarchingCubesShadersModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	const FString PluginBaseDirectory = IPluginManager::Get().FindPlugin(TEXT("MarchingCubesShaders"))->GetBaseDir();
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/MarchingCubesShaders"), FPaths::Combine(PluginBaseDirectory, TEXT("Shaders")));
}

void FMarchingCubesShadersModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMarchingCubesShadersModule, MarchingCubesShaders)