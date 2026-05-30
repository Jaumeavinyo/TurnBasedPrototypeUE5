// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UInteractable.h"
#include "Engine/DataAsset.h"
#include "ChestDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UChestDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, Category = "ChestMesh")
	USkeletalMesh* SkeletalMesh;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "")//UMaterial interface is parent to all material type clases, this allows to use UMaterial, UMaterialInstance, UMaterialInstanceDinamic
	UMaterialInterface* MaterialOverride;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Interactions")
	EInteractionType mainInteraction;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Interactions")
	TArray<EInteractionType> interactions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* OpenChestAnim;
};
