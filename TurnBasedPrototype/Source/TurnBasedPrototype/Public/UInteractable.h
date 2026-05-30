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
	GrabObject,
	UseDoor,
	OpenChest,
	Use
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
public:
	virtual TArray<EInteractionType>* GetSupportedInteractions() const = 0;
	virtual void SetSupportedInteractions() = 0;
	


	//Main interaction for this interactable, defines what player does when left clicking on this interactable and also defines mouse symbol when hovering
	EInteractionType mainInteractionType;
	
	//all posible interactions for this interactable
	TArray<EInteractionType>* Ainteractions;
};
