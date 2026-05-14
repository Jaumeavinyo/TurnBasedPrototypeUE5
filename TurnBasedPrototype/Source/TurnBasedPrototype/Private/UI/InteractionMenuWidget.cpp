// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/PanelWidget.h"
#include "UInteractable.h"
#include "UI/InteractionMenuWidget.h"
#include "UI/InteractionMenuItemWidget.h"


void UInteractionMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UInteractionMenuWidget::PopulateMenu(AActor* InTarget, const TArray<EInteractionType>& Interactions)
{
	CurrentTarget = InTarget;

	// clear panel
	if (InteractionsMenuPanel)
	{
		InteractionsMenuPanel->ClearChildren();
	}

	// Create a button for every interaction
	for (EInteractionType Type : Interactions)
	{
		if (MenuItemWidgetClass)
		{
			UInteractionMenuItemWidget* MenuItem = CreateWidget<UInteractionMenuItemWidget>(this, MenuItemWidgetClass);
			if (MenuItem)
			{
				MenuItem->ConfigureInteraction(Type, CurrentTarget);
				MenuItem->OnInteractionSelected.AddDynamic(this, &UInteractionMenuWidget::OnItemSelected);
				InteractionsMenuPanel->AddChild(MenuItem);
			}
		}
	}
}

void UInteractionMenuWidget::OnItemSelected(EInteractionType InteractionType, AActor* Target)
{
	// Notify UI Manager
	if (OnInteractionSelected.IsBound())
	{
		OnInteractionSelected.Broadcast(InteractionType, Target);
	}
    
	// close menu automatically after use
	CloseMenu();
}

void UInteractionMenuWidget::CloseMenu()
{
	RemoveFromParent();
}