// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackDataAsset.generated.h"

//WEAPON ANIMS
UENUM(BlueprintType)
enum class AttackType : uint8
{
	WeaponLight UMETA(DisplayName = "Light"),//default attack for a weapon
	WeaponHeavy UMETA(DisplayName = "Heavy"),//special attack for a weapon
	Special UMETA(DisplayName = "Special")//attack that is not attached to a weapon
};


UENUM(BlueprintType)
enum class AttackDamageType : uint8
{
	Physical UMETA(DisplayName = "Physical"),
	Magical UMETA(DisplayName = "Magic")
}; 

/**
 * 
 */
UCLASS()
class TURNBASEDPROTOTYPE_API UAttackDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	int32 id;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	bool bIsAttatchToWeapon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	int32 damageDice;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	int32 numberOfDices;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	UAnimMontage* AttackAnim;
	
	//VFX not added yet
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	AttackDamageType AttackDamageType;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	AttackType Type;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")//if 0, use weaponRange
	float AttackRange;
	
};
