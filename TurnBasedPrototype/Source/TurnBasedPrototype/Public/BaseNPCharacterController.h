// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseNPCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API ABaseNPCharacterController : public AAIController
{
	GENERATED_BODY()

	virtual void BeginPlay();
};
