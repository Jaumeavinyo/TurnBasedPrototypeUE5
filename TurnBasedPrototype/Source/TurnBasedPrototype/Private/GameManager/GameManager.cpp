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

void UGameManager::ManagerTick(float DeltaTime)
{

}

void UGameManager::AddControlledActor(AActor* actor)
{
	ControlledActors.Add(actor);
}

void UGameManager::removeControlledActor(AActor* actor)
{
	ControlledActors.RemoveSingle(actor);
}
