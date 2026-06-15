// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "UInteractable.h"
#include "Blueprint/UserWidget.h"
#include "UIManager.generated.h"
*/

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h" 
#include "UInteractable.h"
#include "Blueprint/UserWidget.h"
#include "UI/InteractionMenuWidget.h"
#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"
#include "UIManager.generated.h"
/**
 *  PLAYER SUBSYSTEM
 *  MyPlayerSubsystem* MySubsystem = LocalPlayer->GetSubsystem<UMyPlayerSubsystem>();
 *	
 *	GAMEINSTANCESUBSYSTEM
 *	UGameInstanceSubsystem* MySubsystem = GetGameInstance()->GetSubsystem<UGameInstanceSubsystem>();
 *
 *
 *
 *
 *  
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UUIManager : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:

	UUIManager();

	// Initialize the subsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION()
	void OnInteractionSelected(EInteractionType InteractionType, AActor* Target);

	UFUNCTION(BlueprintCallable, Category = "UI")
	void ShowAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions);

	UFUNCTION(BlueprintCallable, Category = "UI")
	void HideAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions);

	UPROPERTY()
	UInteractionMenuWidget* CurrentInteractionMenuInstance;
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "UI Classes")
	TSubclassOf<UUserWidget> AvailableInteractionsMenuWidgetClass;

	
	UPROPERTY()
	UUserWidget* CurrentActiveWidget;
	
	
	
	
};
