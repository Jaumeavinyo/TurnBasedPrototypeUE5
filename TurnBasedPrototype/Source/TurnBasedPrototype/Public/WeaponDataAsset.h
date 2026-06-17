// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackDataAsset.h"
#include "Materials/MaterialInterface.h"
#include "WeaponDataAsset.generated.h"


//WEAPON INFO
UENUM(BlueprintType)
enum class WeaponAttackType : uint8
{
	Melee UMETA(DisplayName = "Melee"),
	Ranged UMETA(DisplayName = "Ranged")
};


UENUM(BlueprintType)
enum class WeaponType : uint8
{
	GreatSword UMETA(DisplayName = "GreatSword"),
	Sword UMETA(DisplayName = "Sword"),
	Dagger UMETA(DisplayName = "Dagger"),
	Stick UMETA(DisplayName = "Stick")
};



USTRUCT(BlueprintType)
struct FWeaponAnim
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "type")
	AttackType Type;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "anim")
	UAnimMontage* animMontage;
	
};
// ~WEAPON ANIMS


UCLASS(BlueprintType)
class TURNBASEDPROTOTYPE_API UWeaponDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	// WEAPON GAME OBJECT
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "")
	UStaticMesh* Mesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "")//UMaterial interface is parent to all material type clases, this allows to use UMaterial, UMaterialInstance, UMaterialInstanceDinamic
	UMaterialInterface* MaterialOverride;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "")
	UTexture2D* WeaponIcon;

	//WEAPON DATA
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	TArray<FWeaponAnim> weaponAnims;

	//Weapon attacks
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	TArray<UAttackDataAsset*> WeaponAttacks;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* DrawWeaponAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* SheathingWeaponAnim;

	//this is to know the default positions for this weapon: for a greatsword could be rhand and onback
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
	FName DefaultWeaponDrawedSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
	FName DefaultWeaponSheathedSocket;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
	FName OnRHandAttachSocket;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
	FName OnBackAttachSocket;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	WeaponAttackType weaponAttackType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	WeaponType weaponType;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	float weaponRange;

	//GAME DATA
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	FName weaponName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	FText weaponDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	FName rarity;
	
	
};
