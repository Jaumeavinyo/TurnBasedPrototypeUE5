// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"

#include "NavigationSystem.h"

AMyAIController::AMyAIController()
{
	
	bStartAILogicOnPossess = true; 
	bStopAILogicOnUnposses = true;  
}

void AMyAIController::BeginPlay()
{
	Super::BeginPlay();
}

void AMyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
    

    
	UE_LOG(LogTemp, Log, TEXT("AI Controller possessing: %s"), *InPawn->GetName());
}