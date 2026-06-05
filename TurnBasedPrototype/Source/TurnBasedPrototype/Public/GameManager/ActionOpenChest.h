// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Chest.h"
#include "NavigationSystem.h"
#include "BaseCharacter.h"
#include "BaseAction.h"
#include "ActionOpenChest.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UActionOpenChest : public UBaseAction
{
	GENERATED_BODY()
public:

	UFUNCTION()
	bool OnInitialize()override; //overrided by programmer but called from InitializeAction

	UFUNCTION()
	bool PerformAction()override;//called from game manager

	UFUNCTION()
	bool FinishAction()override;//called from game manager

	UFUNCTION()
	FVector FindClosestPoint();
	
	UPROPERTY()
	FVector OpenChestPathPoint;

	UPROPERTY()
	bool IsMoving;
};
