// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"
#include "PlayerCharacter.h"
#include "BaseWeapon.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

void UWeaponComponent::SetCurrentSocket(FName socket)
{
	if (USkeletalMeshComponent* CharacterMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>())
	{
		//How to set sockets for static mesh weapons:
		
		//Blue arrow needs to point to the tip of the weapon, the red one to an edge that cuts, and green to a side (this is the blade example)
		
		//set the character static mesh socket in the place you want the weapon socket to be in game, in case of the blade,
		//if we put the socket location in the palm of the hand, the weapon socket will be in the palm of the hand

		//All weapons or tools will have a socket named: ObjectGripSocket
		
		FTransform weaponSocket = currentWeapon->WeaponMesh->GetSocketTransform(TEXT("ObjectGripSocket"),RTS_Component);
		FTransform InverseGrip = weaponSocket.Inverse();

		currentWeapon->AttachToComponent(CharacterMesh, FAttachmentTransformRules::KeepRelativeTransform, socket);
		currentWeapon->SetActorRelativeTransform(InverseGrip);
		
		
		
	}
}

void UWeaponComponent::EquipWeapon(TSubclassOf<ABaseWeapon> newWeapon, FName socket)
{
	if (currentWeapon)
	{
		currentWeapon->Destroy();
		currentWeapon = nullptr;
	}
	if (!newWeapon || !GetOwner())
	{
		return;
		
	}
	
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = GetOwner();
	SpawnParams.Instigator = Cast<APawn>(GetOwner());
    
	currentWeapon = GetOwner()->GetWorld()->SpawnActor<ABaseWeapon>(newWeapon,GetOwner()->GetActorLocation(),GetOwner()->GetActorRotation(),SpawnParams
	);
	if (!currentWeapon)
	{
		return;
	}
	//Attach new weapon to socket
	if (USkeletalMeshComponent* CharacterMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>())
	{
		SetCurrentSocket(socket);
		//currentWeapon->AttachToComponent(CharacterMesh,FAttachmentTransformRules::SnapToTargetIncludingScale,socket );
	}
}


//Dice should be already rolled by combat director, combat director asks this component which dices has to throw for the specific weapon, compares them to the minimun to success
// and then moves the character if necessary and only when position of the character is in range (weapon) to attack we call this function giving it the anim to perform.
//then the combat director waits a specific animNotify to take the enemy life and tell him to hit react
void UWeaponComponent::performAttack(AttackType attackType)
{
	if (!currentWeapon)
	{
		UE_LOG(LogTemp, Warning, TEXT("No weapon equipped!"));
		return;
	}
	
	/*for (FWeaponAnim anim : currentWeapon->GetWeaponData()->weaponAnims)
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
	}*/
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
