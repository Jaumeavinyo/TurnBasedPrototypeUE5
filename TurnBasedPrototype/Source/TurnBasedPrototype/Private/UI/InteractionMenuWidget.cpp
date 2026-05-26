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