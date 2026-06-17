// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"


// Sets default values

ABaseCharacter::ABaseCharacter()
{
}

ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	
	//Create Weapon
	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>(TEXT("Weapon Component"));
	bWeaponDrawed = false;
	bWeaponSheathed = false;
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PuppetComponent = CreateDefaultSubobject<UPuppetComponent>(TEXT("Puppet Component"));

	
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseCharacter::AddAvailableAttack(UAttackDataAsset* attack)//calll everytime a weapon is set as current, need to remove attacks that come from weapons
{
	AvailableAttacks.Add(attack);
}

void ABaseCharacter::AddWeaponAttachedAttacks(TArray<UAttackDataAsset*> attacks)
{
	for (UAttackDataAsset* Attack : attacks)
	{
		if (Attack && Attack->bIsAttatchToWeapon)
		{
			AvailableAttacks.AddUnique(Attack);
		}
	}
}

UAttackDataAsset* ABaseCharacter::GetbasicAttack()
{
	for (UAttackDataAsset* Attack : AvailableAttacks)
	{
		if (Attack->bIsAttatchToWeapon && Attack->Type == AttackType::WeaponLight)
		{
			return Attack;
		}
	}
	UE_LOG(LogTemp, Error, TEXT(" ABaseCharacter::GetbasicAttack(): Failed to find a weapon Light attack"));
	return NULL;
}

void ABaseCharacter::RemoveWeaponAttachedAttacks()
{
	for (int i = AvailableAttacks.Num() - 1; i >= 0; i--)
	{
		if (AvailableAttacks[i] && AvailableAttacks[i]->bIsAttatchToWeapon)
		{
			AvailableAttacks.RemoveAt(i);
		}
	}
}

void ABaseCharacter::DrawWeapon(FName socket)
{
	if (!WeaponComponent || !WeaponComponent->currentWeapon)
	{
		
		UE_LOG(LogTemp, Warning,TEXT("ABaseCharacter::DrawWeapon(FName socket) --- WeaponComponent or Current weapon are NULLPTR!!!"));
	}else if (!bWeaponDrawed)
	{
		PlayAnimMontage(WeaponComponent->GetCurrentWeaponData()->DrawWeaponAnim);//this anim has an AnimNotify to change sockets
		/*bWeaponDrawed = true;
		bWeaponSheathed = false;*/ //this code here makes the state change before anim is finished and the ABP gets a bit mad hehe now done in BP TODO (change it to c++)
	}
}

void ABaseCharacter::SheatheWeapon(FName socket)
{
	if (!WeaponComponent || !WeaponComponent->currentWeapon)
	{
		
		UE_LOG(LogTemp, Warning,TEXT("ABaseCharacter::SheatheWeapon(FName socket) --- WeaponComponent or Current weapon are NULLPTR!!!"));
	}else if(!bWeaponSheathed)
	{
		PlayAnimMontage(WeaponComponent->GetCurrentWeaponData()->SheathingWeaponAnim);//this anim has an AnimNotify to change sockets
		/*bWeaponDrawed = false;
		bWeaponSheathed = true;*/ //this code here makes the state change before anim is finished and the ABP gets a bit mad hehe now done in BP TODO (change it to c++)
	}
	
}

