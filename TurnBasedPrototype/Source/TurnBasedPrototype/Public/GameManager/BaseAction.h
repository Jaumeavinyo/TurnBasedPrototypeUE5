// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseAction.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UBaseAction : public UObject
{
	GENERATED_BODY()

public:
	
	bool InitializeAction(AActor* performer); //called from game manager

	
	virtual bool OnInitialize(); //overrided by programmer but called from InitializeAction

	
	virtual bool PerformAction();//called from game manager

	
	virtual bool FinishAction();//called from game manager


	UPROPERTY()
	bool ActionFinished = false;
	
	UPROPERTY()
	AActor* ActionPerformer;
};
