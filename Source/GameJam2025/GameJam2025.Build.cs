// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameJam2025 : ModuleRules
{
	public GameJam2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
