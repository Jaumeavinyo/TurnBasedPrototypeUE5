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

	UFUNCTION(BlueprintCallable)//hay q llamar a esta funcion en algun sitio
	void ConfigureInteraction(EInteractionType interactionType, AActor* InteractionTarget);

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnInteractionSelected OnInteractionSelected;



	virtual void NativeConstruct() override;
	virtual void NativeOnInitialized() override;
	
	
	UFUNCTION()
	void HandleButtonClicked();
	
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))//old interactionButton
	class UButton* LinkedButton;

	UPROPERTY(BlueprintReadWrite)
	FText InteractionText;

	UPROPERTY(BlueprintReadWrite)
	EInteractionType CurrentInteractionType;
private:
	
	AActor* TargetActor;
};
