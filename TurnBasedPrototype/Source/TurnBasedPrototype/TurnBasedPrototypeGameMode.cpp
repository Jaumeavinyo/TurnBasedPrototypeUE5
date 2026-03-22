// Copyright Epic Games, Inc. All Rights Reserved.

#include "TurnBasedPrototypeGameMode.h"
#include "TurnBasedPrototypePlayerController.h"
#include "TurnBasedPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATurnBasedPrototypeGameMode::ATurnBasedPrototypeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATurnBasedPrototypePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BG3_Game/Player/BP_MyPlayerCharacter.BP_MyPlayerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}