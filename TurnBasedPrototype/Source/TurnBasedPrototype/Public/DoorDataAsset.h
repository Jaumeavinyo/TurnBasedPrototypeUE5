// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UInteractable.h"
#include "DoorDataAsset.generated.h"

UCLASS(BlueprintType)
class TURNBASEDPROTOTYPE_API UDoorDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "Door")
	UStaticMesh* DoorMesh;
	
	UPROPERTY(EditDefaultsOnly, Category = "Interactions")
	EInteractionType mainInteraction = EInteractionType::UseDoor;
	
	UPROPERTY(EditDefaultsOnly, Category = "Interactions")
	TArray<EInteractionType> interactions;
	
	UPROPERTY(EditDefaultsOnly, Category = "Rotation")
	float OpenAngle = 90.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Rotation")
	float RotationSpeed = 2.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Rotation")
	bool bOpenClockwise = true;
	
	UPROPERTY(EditDefaultsOnly, Category = "Rotation")
	UCurveFloat* RotationCurve;
};