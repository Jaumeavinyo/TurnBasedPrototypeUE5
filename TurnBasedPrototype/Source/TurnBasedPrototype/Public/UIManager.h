// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
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
	/*virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "UI")
	void ShowAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions);

	UFUNCTION(BlueprintCallable, Category = "UI")
	void HideAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions);

private:
	UPROPERTY(EditDefaultsOnly, Category = "UI Classes")
	TSubclassOf<UUserWidget> AvailableInteractionsMenuWidgetClass;


	UPROPERTY()
	UUserWidget* CurrentActiveWidget;*/
};
