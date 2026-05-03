// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseWeapon.h"
#include "UInteractable.h"
#include "NPCDataAsset.generated.h"

UENUM(BlueprintType)
enum class NPCState : uint8
{
	Pasive UMETA(DisplayName = "Pasive"),
	Agressive UMETA(DisplayName = "Agressive"),
	Special UMETA(DisplayName = "Special")
};

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UNPCDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	//List of interaction types
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Interactions")
	TArray<EInteractionType> interactions;
	//Initial NPC state (Agressive, pacific...)
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "state")
	NPCState initialNPCState;
	

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Name")
	FName NPCName;
	
	
};
