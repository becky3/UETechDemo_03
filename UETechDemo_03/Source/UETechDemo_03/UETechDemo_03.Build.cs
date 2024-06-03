// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UETechDemo_03 : ModuleRules
{
	public UETechDemo_03(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
