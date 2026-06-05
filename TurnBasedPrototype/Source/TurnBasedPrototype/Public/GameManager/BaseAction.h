// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseAction.generated.h"

USTRUCT()
struct FActionContext
{
	GENERATED_BODY()
	UPROPERTY()
	AActor* Performer;  //Who does this action
	
	UPROPERTY()
	AActor* TargetActor;  //Who or what receives this action
};

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UBaseAction : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	bool InitializeAction(FActionContext& context); //called from game manager

	
	virtual bool OnInitialize(); //overrided by programmer but called from InitializeAction

	
	virtual bool PerformAction();//called from game manager

	
	virtual bool FinishAction();//called from game manager


	UPROPERTY()
	FActionContext ActionContext;
	
};
