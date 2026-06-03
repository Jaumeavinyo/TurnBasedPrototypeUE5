// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameManager.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UGameManager : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
public:
	//UGameInstanceSubsystem Interface 
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	//FTickableGameObject Interface 
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickable() const override;

	//List of actors that are currently performing actions in OnInitialize() || PerformAction() || FinishAction() FinishAction should remove them from this list
	UPROPERTY()
	TArray<AActor*> ControlledActors;

};
