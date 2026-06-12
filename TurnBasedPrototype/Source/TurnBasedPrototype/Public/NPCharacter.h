// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "UInteractable.h"
#include "MyAIController.h"
#include "NPCDataAsset.h"
#include "NPCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API ANPCharacter : public ABaseCharacter, public IInteractable
{
	GENERATED_BODY()
public:

	ANPCharacter();
	void BeginPlay() override;
public:
	
	UPROPERTY(EditDefaultsOnly , Category = "Data")
	UNPCDataAsset* NPC_Data;

public:
	
	virtual TArray<EInteractionType>* GetSupportedInteractions() const override;
	virtual void SetSupportedInteractions()  override;
	

	UFUNCTION(BlueprintCallable, Category = "interactions")
	TArray<EInteractionType> GetSupportedInteractions();//This function is called by UI to show player interaction options when selecting an npc

	
};
