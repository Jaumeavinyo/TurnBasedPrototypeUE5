// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Core/Public/Containers/Queue.h"
#include "BaseAction.h"
#include "Components/ActorComponent.h"
#include "PuppetComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TURNBASEDPROTOTYPE_API UPuppetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPuppetComponent();

	
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void EnqueueAction(UBaseAction* Action);
	
	UFUNCTION(BlueprintCallable, Category = "Actions")
	void ClearActionQueue();
	
	UFUNCTION(BlueprintPure, Category = "Actions")
	bool HasQueuedActions() const;
	
	UFUNCTION(BlueprintPure, Category = "Actions")
	bool IsExecutingAction() const;
	
	UFUNCTION(BlueprintPure, Category = "Actions")
	UBaseAction* GetCurrentAction() const;
	
	UPROPERTY()
	TArray<UBaseAction*> ActionsArray;

	UPROPERTY()
	UBaseAction* CurrentAction;

	UPROPERTY()
	bool bIsProcessingAction;
};
