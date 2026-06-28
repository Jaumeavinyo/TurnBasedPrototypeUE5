// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/GameManager.h"
#include "Engine/Engine.h"

void UGameManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	currentTurnIndex = 0;
	
}

void UGameManager::Deinitialize()
{
	Super::Deinitialize();
}

void UGameManager::ManagerTick(float DeltaTime)
{

}

void UGameManager::AddControlledCharacter(ABaseCharacter* character)
{
	ControlledCharacters.Add(character);
}

void UGameManager::removeControlledCharacter(ABaseCharacter* character)
{
	ControlledCharacters.RemoveSingle(character);
}

bool UGameManager::RequestAuthorizationToAct(ABaseCharacter* performer)
{
	if (!ControlledCharacters.IsEmpty())
	{
		if (performer == ControlledCharacters[currentTurnIndex] && performer->PuppetComponent->ActionsArray.Num() < 1.0)
		{
			return true;
		}
		return false;
	}
	return true;
}

void UGameManager::StartCombat()
{
	/* called from attacked Character or the one enemy that wants to start it
	 * when first attack action if finished -> next line
	 * calls nearby characters that should enter the combat on each side
	 * calls the dice function to order every character in the array
	 * calls UI to place them in the top part of the screen
	 * 
	 */
}
