// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/InteractionMenuWidget.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"

#include "Components/PanelWidget.h"
#include "UInteractable.h"
#include "UI/InteractionMenuItemWidget.h"


void UInteractionMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	RootVerticalBox = NewObject<UVerticalBox>(this);

}
/*
void UInteractionMenuWidget::PopulateMenu(AActor* InTarget, const TArray<EInteractionType>& Interactions)
{

	


	
	CurrentTarget = InTarget;

	for (UInteractionMenuItemWidget* item : MenuItems)
	{
		if (item) item->RemoveFromParent();
	}
	MenuItems.Empty();

	for (EInteractionType type : Interactions)
	{
		UInteractionMenuItemWidget* menuItem = CreateWidget<UInteractionMenuItemWidget>(this,UInteractionMenuItemWidget::StaticClass());

		if (menuItem)
		{
			menuItem->ConfigureInteraction(type, CurrentTarget);
			menuItem->OnInteractionSelected.AddDynamic(this, &UInteractionMenuWidget::OnItemSelected);
			MenuItems.Add(menuItem);
		}
	}
	OnInteractionsReady();
}*/

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