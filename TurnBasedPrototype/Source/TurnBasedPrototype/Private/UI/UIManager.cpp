
#include "UI/UIManager.h"
#include "UI/InteractionMenuWidget.h"
#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"

UUIManager::UUIManager()
{
	CurrentActiveWidget = nullptr;
	
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




void UUIManager::ShowAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions_)
{
	ATurnBasedPrototypePlayerController* PC = Cast<ATurnBasedPrototypePlayerController>(GetLocalPlayer()->GetPlayerController(GetWorld()));

	if (!PC)
	{
		UE_LOG(LogTemp, Warning, TEXT("UUIManager Error: could not get the player controller"));
		return;
	}

	// Close curr menu if exists
	if (CurrentInteractionMenuInstance)
	{
		CurrentInteractionMenuInstance->CloseMenu();
		CurrentInteractionMenuInstance = nullptr;
	}

	// Create new menu
	if (PC && PC->CurrentInteractionMenuWidget)
	{
		CurrentInteractionMenuInstance = CreateWidget<UInteractionMenuWidget>(GetLocalPlayer()->GetGameInstance(), PC->CurrentInteractionMenuWidget);
		if (CurrentInteractionMenuInstance)
		{
			CurrentInteractionMenuInstance->OnInteractionSelected.AddDynamic(this, &UUIManager::OnInteractionSelected);
			if (!Interactions_.IsEmpty())
			{
				CurrentInteractionMenuInstance->Interactions = Interactions_;
				CurrentInteractionMenuInstance->PopulateMenu(Target); //widget blueprint event, also sets the pos of the menu
				CurrentInteractionMenuInstance->CurrentTarget = Target;
				CurrentInteractionMenuInstance->AddToViewport();
				
			}else
			{
				UE_LOG(LogTemp, Warning, TEXT("UUIManager Error: Interactions for this interactable was empty"));
			
			}
		}
	}
}

void UUIManager::OnInteractionSelected(EInteractionType InteractionType, AActor* Target)
{

	ATurnBasedPrototypePlayerController* PC = Cast<ATurnBasedPrototypePlayerController>(GetLocalPlayer()->GetPlayerController(GetWorld()));
	if (PC)
	{
		PC->HandleInteractionOrder(InteractionType, Target);
	}
    
	// El menú ya se cerró solo (en OnItemSelected llamamos CloseMenu)
	CurrentInteractionMenuInstance->RemoveFromParent();// = nullptr;
}



void UUIManager::HideAvailableInteractionsMenu(AActor* Target, const TArray<EInteractionType>& Interactions)
{
	
}


