// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LudumDare51 : ModuleRules
{
	public LudumDare51(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
