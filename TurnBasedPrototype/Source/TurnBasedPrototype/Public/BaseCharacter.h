// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameManager/PuppetComponent.h"
#include "GameFramework/Character.h"
#include "WeaponComponent.h"
#include "BaseCharacter.generated.h"

UCLASS(Blueprintable)
class TURNBASEDPROTOTYPE_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();
	
	// Sets default values for this character's properties
	ABaseCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:

	// WEAPON SYSTEM
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UWeaponComponent* WeaponComponent;
	
	//calls character to play the anim to hold saved weapon. after, an anim notify calls SetCurrentSocket(FName name) in the right moment
	UFUNCTION(BlueprintCallable, Category = "weapon")
	void DrawWeapon(FName socket);
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "weapon")
	bool bWeaponDrawed;
	
	//calls character to play the anim to save weapon. after, an anim notify calls SetCurrentSocket(FName name) in the right moment
	UFUNCTION(BlueprintCallable, Category = "weapon")
	void SheatheWeapon(FName socket);
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "weapon")
	bool bWeaponSheathed;

	// !WEAPON SYSTEM

	UPuppetComponent* PuppetComponent;
};
