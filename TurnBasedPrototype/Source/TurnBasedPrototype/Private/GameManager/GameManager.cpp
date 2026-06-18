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
