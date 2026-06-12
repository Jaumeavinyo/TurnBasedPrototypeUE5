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
	void OnInitialize()override; //overrided by programmer but called from InitializeAction

	UFUNCTION()
	void PerformAction()override;//called from game manager

	UFUNCTION()
	void FinishAction()override;//called from game manager

	UFUNCTION()
	FVector FindClosestPoint();

	UFUNCTION()
	AController* GetControllerFromPerformer();

	void OpenChestWithDelay();
	
	UPROPERTY()
	FVector OpenChestPathPoint;
	UPROPERTY()
	bool bHasReachedDestination;

	UPROPERTY()
	bool IsMoving;
};
