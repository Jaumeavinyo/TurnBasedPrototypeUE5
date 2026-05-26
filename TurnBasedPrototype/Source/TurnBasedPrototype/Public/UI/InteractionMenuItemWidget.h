// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UInteractable.h"
#include "InteractionMenuItemWidget.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionSelected, EInteractionType, InteractionType, AActor*, Target);//for parent menu

UCLASS()
class TURNBASEDPROTOTYPE_API UInteractionMenuItemWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void ConfigureInteraction(EInteractionType interactionType, AActor* InteractionTarget);

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnInteractionSelected OnInteractionSelected;



	virtual void NativeConstruct() override;


	UFUNCTION()
	void HandleButtonClicked();
	
	UPROPERTY(BlueprintReadWrite)
	class UButton* InteractionButton;

	UPROPERTY(BlueprintReadWrite)
	class UTextBlock* InteractionText;

	

private:
	EInteractionType CurrentInteractionType;
	AActor* TargetActor;
};
