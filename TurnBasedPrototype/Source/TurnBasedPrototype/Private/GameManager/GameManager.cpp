// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/GameManager.h"
#include "Engine/Engine.h"

void UGameManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("Game Manager Subsystem Initialized. Game session starting."));
	
}

void UGameManager::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Manager Subsystem Deinitialized. Game exiting."));
	//cleanup

	
	Super::Deinitialize();
}

void UGameManager::Tick(float DeltaTime)
{
	for (AActor* actor: ControlledActors)//loops throw the puppets and look for their puppet component
	{
		
	}

}

TStatId UGameManager::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UMyGameManagerSubsystem, STATGROUP_Tickables);
}

bool UGameManager::IsTickable() const
{
	// Return false to pause ticking, true to resume.
	return true;
}