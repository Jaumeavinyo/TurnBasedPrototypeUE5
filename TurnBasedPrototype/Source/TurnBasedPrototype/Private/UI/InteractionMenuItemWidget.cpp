// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InteractionMenuItemWidget.h"
#include "UInteractable.h"
#include "Blueprint/WidgetTree.h"
#include "Components/PanelWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"


void UInteractionMenuItemWidget::NativeConstruct()
{
	Super::NativeConstruct();
    
	if (InteractionButton)
	{
		InteractionButton->OnClicked.AddDynamic(this, &UInteractionMenuItemWidget::HandleButtonClicked);
		
	}
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

	InteractionText->SetText(FText::FromString(InteractionItemText));
}

void UInteractionMenuItemWidget::HandleButtonClicked() 
{
	
	if (OnInteractionSelected.IsBound())
	{
		OnInteractionSelected.Broadcast(CurrentInteractionType, TargetActor);
	}
}


