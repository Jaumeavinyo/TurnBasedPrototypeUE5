// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseNPCharacterController.h"
#include "NPCharacter.h"
void ABaseNPCharacterController::BeginPlay()
{
	Super::BeginPlay();
	ANPCharacter* NPC = Cast<ANPCharacter>(GetPawn());
	if (NPC && NPC->BTAsset)
	{
		RunBehaviorTree(NPC->BTAsset);
	}
	
}
