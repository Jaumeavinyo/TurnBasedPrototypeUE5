// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseAction.generated.h"

UENUM()
enum ActionState
{
	None UMETA(DisplayName = "Initialize"),
	Initialize UMETA(DisplayName = "Initialize"),
	Perform UMETA(DisplayName = "perform"),
	Finish UMETA(DisplayName = "Finish"),
	Close UMETA(DisplayName = "Close"),
};

USTRUCT(BlueprintType)
struct FActionContext
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Context")
	AActor* Performer;  //Who does this action
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Context")
	AActor* TargetActor;  //Who or what receives this action
};

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class TURNBASEDPROTOTYPE_API UBaseAction : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void InitializeAction(FActionContext& context); //called from puppetcomp

	
	virtual void OnInitialize(); //overrided by programmer but called from InitializeAction

	
	virtual void PerformAction();//called from game manager

	
	virtual void FinishAction();//called from game manager

	UFUNCTION(BlueprintCallable)
	void SetActionContext(AActor* targetActor, AActor* performer);
	
	UPROPERTY(BlueprintReadWrite)
	FActionContext ActionContext;
	
	ActionState state;
};
