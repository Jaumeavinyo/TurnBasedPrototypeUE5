// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UWeaponComponent::EquipWeapon(UWeaponDataAsset* NewWeapon)
{
}


void UWeaponComponent::performAttack(AttackType attackType)
{

	if (!CurrentWeapon)
	{
		UE_LOG(LogTemp, Warning, TEXT("No weapon equipped!"));
		return;
	}
	
	for (FWeaponAnim anim : CurrentWeapon->weaponAnims)
	{
		if (anim.attackType == AttackType::Light)
		{
			//Roll dice and attack(anim, damage) function 
		}
		if (anim.attackType == AttackType::Heavy)
		{
			//Roll dice and attack(anim, damage) function 
		}
	}
}

// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

