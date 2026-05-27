// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InteractionMenuItemWidget.h"
#include "UI/InteractionMenuWidget.h"
#include "UInteractable.h"
#include "Blueprint/WidgetTree.h"
#include "Components/PanelWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"


void UInteractionMenuItemWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UInteractionMenuWidget* Menu = GetTypedOuter<UInteractionMenuWidget>();
	if (Menu)
	{
		OnInteractionSelected.AddDynamic(Menu, &UInteractionMenuWidget::OnItemSelected);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Bound to menu via GetTypedOuter!"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No menu found!"));
	}
	
	if (LinkedButton)
	{
		LinkedButton->OnClicked.RemoveDynamic(this, &UInteractionMenuItemWidget::HandleButtonClicked);
		LinkedButton->OnClicked.AddDynamic(this, &UInteractionMenuItemWidget::HandleButtonClicked);
	}
}

void UInteractionMenuItemWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
   
}

void UInteractionMenuItemWidget::ConfigureInteraction(EInteractionType interactionType, AActor* InteractionTarget)
{
	CurrentInteractionType = interactionType;
	TargetActor = InteractionTarget;

	FString InteractionItemText;
	
	switch (CurrentInteractionType)
	{
	case EInteractionType::None:
		InteractionItemText = TEXT("None");
		break;
	case EInteractionType::Attack:
		InteractionItemText = TEXT("Attack");
		break;
	case EInteractionType::Grab:
		InteractionItemText = TEXT("Grab");
		break;
	case EInteractionType::Inspect:
		InteractionItemText = TEXT("Inspect");
		break;
	case EInteractionType::Open:
		InteractionItemText = TEXT("Open");
		break;
	case EInteractionType::Talk:
		InteractionItemText = TEXT("Talk");
		break;
	
	}

	InteractionText = FText::FromString(InteractionItemText);
}

void UInteractionMenuItemWidget::HandleButtonClicked() 
{
	
	if (OnInteractionSelected.IsBound())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ButtonItem: Broadcast to OnInteractionSelected()"));
		OnInteractionSelected.Broadcast(CurrentInteractionType, TargetActor);
	}
}


