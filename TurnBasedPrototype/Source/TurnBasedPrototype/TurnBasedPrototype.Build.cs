// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TurnBasedPrototype : ModuleRules
{
	public TurnBasedPrototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		//Added UMG: UUserWidget, CreateWidget(), AddToViewport(), all UI system. Added for the UIManager
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput","UMG" });
    }
}
