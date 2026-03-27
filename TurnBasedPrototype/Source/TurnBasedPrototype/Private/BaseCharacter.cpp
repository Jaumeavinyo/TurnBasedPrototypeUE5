// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

// Sets default values

ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	
	//Create Weapon
	Weapon = CreateDefaultSubobject<UWeaponComponent>(TEXT("Weapon Component"));
	bWeaponDrawed = false;
	bWeaponSheathed = false;
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
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

void ABaseCharacter::DrawWeapon(FName socket)
{
	if (!Weapon || !Weapon->currentWeapon)
	{
		
		UE_LOG(LogTemp, Warning,TEXT("ABaseCharacter::DrawWeapon(FName socket) --- WeaponComponent or Current weapon are NULPTR!!!"));
	}else if (!bWeaponDrawed)
	{
		PlayAnimMontage(Weapon->GetCurrentWeaponData()->DrawWeaponAnim);//this anim has a animnotify to change sockets
		bWeaponDrawed = true;
		bWeaponSheathed = false;
	}
	
}

void ABaseCharacter::SheatheWeapon(FName socket)
{
	if (!Weapon || !Weapon->currentWeapon)
	{
		
		UE_LOG(LogTemp, Warning,TEXT("ABaseCharacter::SheatheWeapon(FName socket) --- WeaponComponent or Current weapon are NULPTR!!!"));
	}else if(!bWeaponSheathed)
	{
		PlayAnimMontage(Weapon->GetCurrentWeaponData()->SheathingWeaponAnim);//this anim has a animnotify to change sockets
		bWeaponDrawed = false;
		bWeaponSheathed = true;
	}
	
}

