// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "UI/InteractionMenuItemWidget.h"
#include "UI/InteractionMenuWidget.h"
#include "UI/UIManager.h"

#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"

*/
#include "UI/UIManager.h"
#include "UI/InteractionMenuWidget.h"
#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"

UUIManager::UUIManager()
{
	CurrentActiveWidget = nullptr;
	/*static ConstructorHelpers::FClassFinder<UInteractionMenuWidget> MenuFinder(TEXT("/Game/BG3_Game/UI/WBP_InteractionsMenu.WBP_InteractionsMenu_C"));
    
	if (MenuFinder.Succeeded())
	{
		CurrentInteractionMenuWidget = MenuFinder.Class;
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("UUIManager constructor error: Widget class NOT loaded! Check path."));
	}*/

	
}


void UUIManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	UE_LOG(LogTemp, Warning, TEXT("UUIManager initialized!"));
	//if PC is done in constructor or initializer player controller does not exist
}

void UUIManager::Deinitialize()
{
	Super::Deinitialize();
}




void UUIManager::ShowAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("want to see interaction options"));
	
	ATurnBasedPrototypePlayerController* PC = Cast<ATurnBasedPrototypePlayerController>(GetLocalPlayer()->GetPlayerController(GetWorld()));

	if (!PC)
	{
		UE_LOG(LogTemp, Warning, TEXT("UUIManager Error: could not get the player controller"));
		return;
	}

	// Close curr menu if exists
	if (PC->CurrentInteractionMenuInstance)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("already Valid Widget"));
		PC->CurrentInteractionMenuInstance->CloseMenu();
		PC->CurrentInteractionMenuInstance = nullptr;
	}

	// Create new menu
	if (PC && PC->CurrentInteractionMenuWidget)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Crear nuevo menú"));
		PC->CurrentInteractionMenuInstance = CreateWidget<UInteractionMenuWidget>(GetLocalPlayer()->GetGameInstance(), PC->CurrentInteractionMenuWidget);
		if (PC->CurrentInteractionMenuInstance)
		{
			PC->CurrentInteractionMenuInstance->OnInteractionSelected.AddDynamic(this, &UUIManager::OnInteractionSelected);
			//PC->CurrentInteractionMenuInstance->PopulateMenu(Target, Interactions);
			//PC->CurrentInteractionMenuInstance->AddToViewport();
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("menú in viewport"));
		}
	}
}

void UUIManager::OnInteractionSelected(EInteractionType InteractionType, AActor* Target)
{
	// Aquí notificas al PlayerController o al GameManager
	// Puedes usar un delegado, o buscar el PlayerController directamente
	ATurnBasedPrototypePlayerController* PC = Cast<ATurnBasedPrototypePlayerController>(GetLocalPlayer()->GetPlayerController(GetWorld()));
	if (PC)
	{
		// Por ejemplo, llamar a una función en el PlayerController
		
		PC->HandleInteractionOrder(InteractionType, Target);
		
	}
    
	// El menú ya se cerró solo (en OnItemSelected llamamos CloseMenu)
	PC->CurrentInteractionMenuWidget = nullptr;
}



void UUIManager::HideAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions)
{
	
}