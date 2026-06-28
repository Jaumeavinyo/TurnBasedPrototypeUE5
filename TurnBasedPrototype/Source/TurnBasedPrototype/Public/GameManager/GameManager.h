// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameManager/PuppetComponent.h"
#include "BaseAction.h"
#include "BaseCharacter.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameManager.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UGameManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	//UGameInstanceSubsystem Interface 
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	//FTickableGameObject Interface 
	virtual void ManagerTick(float DeltaTime);


	UFUNCTION()
	void AddControlledCharacter(ABaseCharacter* actor);//Called from puppetcomp.
	UFUNCTION()
	void removeControlledCharacter(ABaseCharacter* actor);//Called from puppetcomp.

	UFUNCTION()
	bool RequestAuthorizationToAct(ABaseCharacter* performer);
	
    UFUNCTION()
    void StartCombat();

	
	//List of actors that are currently performing actions in OnInitialize() || PerformAction() || FinishAction() FinishAction should remove them from this list
	UPROPERTY()
	TArray<ABaseCharacter*> ControlledCharacters;

	UPROPERTY()
	int32 currentTurnIndex;

};
