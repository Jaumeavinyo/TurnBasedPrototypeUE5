// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/PuppetComponent.h"

// Sets default values for this component's properties
UPuppetComponent::UPuppetComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	CurrentAction = nullptr;
	bIsProcessingAction = false;

}


// Called when the game starts
void UPuppetComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPuppetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!CurrentAction && ActionsArray.IsEmpty() && !bIsProcessingAction)
	{
		UE_LOG(LogTemp, Warning, TEXT("PuppetComponent: No actions!"));
	}

	if (!ActionsArray.IsEmpty())//We have actions to process
	{
		if (!IsExecutingAction())//if not processing an action, START doing it
		{
			CurrentAction = ActionsArray[0];
			bIsProcessingAction = true;
		}

		if (bIsProcessingAction)//if processing an action
		{
			switch (CurrentAction->state)
			{
			case ActionState::None:
				CurrentAction->state = ActionState::Initialize;
			case ActionState::Initialize:
				CurrentAction->InitializeAction(CurrentAction->ActionContext); //if goes well, called once and changes state to perform
				break;
			case ActionState::Perform:
				CurrentAction->PerformAction(); //called like tick untill action is set to finish
				break;
			case ActionState::Finish:
				CurrentAction->FinishAction(); // if goes well, called once and changes state to close
				break;
			case ActionState::Close:
				CurrentAction = nullptr;
				ActionsArray.RemoveAt(0);
				bIsProcessingAction = false;
			}
		}
		
	}
}

void UPuppetComponent::EnqueueAction(UBaseAction* Action)
{
	if (!Action) return;
    
	ActionsArray.Add(Action);
}

void UPuppetComponent::ClearActionQueue()
{
	ActionsArray.Empty();
}


bool UPuppetComponent::HasQueuedActions() const
{
	return !ActionsArray.IsEmpty();
}

bool UPuppetComponent::IsExecutingAction() const
{
	return CurrentAction != nullptr;
}

UBaseAction* UPuppetComponent::GetCurrentAction() const
{
	return CurrentAction;
}



