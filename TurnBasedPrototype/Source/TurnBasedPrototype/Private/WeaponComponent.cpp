// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


}

void UWeaponComponent::SetCurrentWeapon(UWeaponDataAsset* NewWeapon)
{
	if (!NewWeapon)
	{
		return;
	}
	CurrentWeapon = NewWeapon;
}

//This triggers equip weapon anim: start anim equip, wait for animnotify->change mesh socket to hand
void UWeaponComponent::EquipWeapon(FText socket)
{
	
}

void UWeaponComponent::UnEquipWeapon(FText socket)
{
}

//Dice should be already rolled by combat director, combat director asks this component which dices has to throw for the specific weapon, compares them to the minimun to success
// and then moves the character if necessary and only when position of the character is in range (weapon) to attack we call this function giving it the anim to perform.
//then the combat director waits a specific animNotify to take the enemy life and tell him to hit react
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
			//attack(anim, damage) function 
		}
		if (anim.attackType == AttackType::Heavy)
		{
			//attack(anim, damage) function 
		}
		if (anim.attackType == AttackType::Special)
		{
			//attack(anim, damage) function 
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

/*
 *
*void UWeaponComponent::UpdateVisualMesh()
{
if (!WeaponMesh || !CurrentWeapon || !CurrentWeapon->Mesh)
{
return;
}
	
// Asignar la malla
WeaponMesh->SetStaticMesh(CurrentWeapon->Mesh);
	
// Aplicar material si existe
if (CurrentWeapon->MaterialOverride)
{
WeaponMesh->SetMaterial(0, CurrentWeapon->MaterialOverride);
}
	
// Adjuntar al personaje en el socket correcto
if (AActor* Owner = GetOwner())
{
if (ACharacter* Character = Cast<ACharacter>(Owner))
{
if (USkeletalMeshComponent* SkeletalMesh = Character->GetMesh())
{
WeaponMesh->AttachToComponent(SkeletalMesh, 
FAttachmentTransformRules::SnapToTargetNotIncludingScale,
CurrentWeapon->AttachSocket);
}
}
}
}

void UWeaponComponent::EquipWeapon(UWeaponDataAsset* NewWeapon)
{
	if (!NewWeapon)
	{
		return;
	}
	
	CurrentWeapon = NewWeapon;
	UpdateVisualMesh();
	
	// Reproducir animación de equipar si existe
	if (ACharacter* Owner = Cast<ACharacter>(GetOwner()))
	{
		if (UAnimInstance* AnimInstance = Owner->GetMesh()->GetAnimInstance())
		{
			if (CurrentWeapon->EquipMontage)
			{
				AnimInstance->Montage_Play(CurrentWeapon->EquipMontage);
			}
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("Equipped weapon: %s"), *CurrentWeapon->WeaponName.ToString());
}
*/
