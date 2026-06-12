// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameManager/BaseAction.h"
#include "BaseCharacter.h"
#include "WeaponDataAsset.h"
#include "ActionAttack.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UActionAttack : public UBaseAction
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
	AController* GetControllerFromPerformer();

	UFUNCTION()
	bool isPlayingAnimMontage(UAnimMontage* montage);

	UPROPERTY()
	UWeaponDataAsset* WeaponData;  // The weapon being used
	
	UPROPERTY()
	AttackType AttackType;

	UPROPERTY()
	UAnimMontage* AttackAnimMontage; 

	UPROPERTY()
	bool IsMoving;

	UPROPERTY()
	bool attackInProcess;

protected:
	UPROPERTY()
	bool bIsWeaponDrawed;

	UPROPERTY()
	ABaseCharacter* actionPerformer;
};
