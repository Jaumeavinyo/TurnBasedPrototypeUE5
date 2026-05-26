// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/VerticalBox.h"
#include "UInteractable.h"
#include "UI/InteractionMenuItemWidget.h"
#include "InteractionMenuWidget.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuInteractionSelected, EInteractionType, InteractionType, AActor*, Target);//tu tell UI manager wich interaction was selected

UCLASS()
class TURNBASEDPROTOTYPE_API UInteractionMenuWidget : public UUserWidget
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void PopulateMenu(AActor* InTarget, const TArray<EInteractionType>& Interactions);

	UFUNCTION(BlueprintCallable, Category = "Interaction")//called when click outside menu
	void CloseMenu();
	
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnMenuInteractionSelected OnInteractionSelected;


	UPROPERTY(BlueprintReadWrite, Category = "Buttons")
	TArray<UInteractionMenuItemWidget*> MenuItems;

	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void OnInteractionsReady();
		
protected:

	virtual void NativeConstruct() override;
	


private:
	UFUNCTION()
	void OnItemSelected(EInteractionType InteractionType, AActor* Target);

	

	
	AActor* CurrentTarget;
	UVerticalBox* RootVerticalBox;
};
