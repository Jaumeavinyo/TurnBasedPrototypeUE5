// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UInteractable.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EInteractionType : uint8
{
	None,
	Attack,
	Talk,
	Inspect,
	Grab,
	Open
};

UINTERFACE(MinimalAPI, Blueprintable)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};


class TURNBASEDPROTOTYPE_API IInteractable 
{
	GENERATED_BODY()
public:
	virtual TArray<EInteractionType>* GetSupportedInteractions() const = 0;
	virtual void Interact(EInteractionType interactionType, AActor* instigator) = 0;

	TArray<EInteractionType>* Ainteractions;
};
