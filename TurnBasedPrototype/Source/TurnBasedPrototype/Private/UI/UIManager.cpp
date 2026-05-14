// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "UI/InteractionMenuItemWidget.h"
#include "UI/InteractionMenuWidget.h"
#include "UI/UIManager.h"

#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"

*/
#include "UI/UIManager.h"
#include "UI/InteractionMenuWidget.h"
#include "UI/InteractionMenuItemWidget.h"
#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"

UUIManager::UUIManager()
{
	CurrentActiveWidget = nullptr;
	static ConstructorHelpers::FClassFinder<UInteractionMenuWidget> MenuFinder(TEXT("/Game/BG3_Game/UI/WBP_InteractionsMenu.WBP_InteractionsMenu_C"));
    
	if (MenuFinder.Succeeded())
	{
		InteractionMenuWidgetClass = MenuFinder.Class;
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("UUIManager constructor error: Widget class NOT loaded! Check path."));
	}
}


void UUIManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	UE_LOG(LogTemp, Warning, TEXT("UUIManager initialized!"));
	
}

void UUIManager::Deinitialize()
{
	Super::Deinitialize();
}




void UUIManager::ShowAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("want to see interaction optionssssssssss"));

	// Cerrar menú existente si lo hay
	if (CurrentInteractionMenuWidget)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Widget Valid"));
		CurrentInteractionMenuWidget->CloseMenu();
		CurrentInteractionMenuWidget = nullptr;
	}

	// Crear nuevo menú
	if (InteractionMenuWidgetClass && Target)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Crear nuevo menú"));
		CurrentInteractionMenuWidget = CreateWidget<UInteractionMenuWidget>(GetLocalPlayer()->GetGameInstance(), InteractionMenuWidgetClass);
		if (CurrentInteractionMenuWidget)
		{
			// Suscribirse al evento de selección
			CurrentInteractionMenuWidget->OnInteractionSelected.AddDynamic(this, &UUIManager::OnInteractionSelected);
            
			// Llenar el menú
			CurrentInteractionMenuWidget->PopulateMenu(Target, Interactions);
            
			// Mostrar en pantalla
			CurrentInteractionMenuWidget->AddToViewport();
		}
	}
}

void UUIManager::OnInteractionSelected(EInteractionType InteractionType, AActor* Target)
{
	// Aquí notificas al PlayerController o al GameManager
	// Puedes usar un delegado, o buscar el PlayerController directamente
    
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		// Por ejemplo, llamar a una función en el PlayerController
		if (ATurnBasedPrototypePlayerController* MyPC = Cast<ATurnBasedPrototypePlayerController>(PC))
		{
			MyPC->HandleInteractionOrder(InteractionType, Target);
		}
	}
    
	// El menú ya se cerró solo (en OnItemSelected llamamos CloseMenu)
	CurrentInteractionMenuWidget = nullptr;
}



void UUIManager::HideAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions)
{
	
}