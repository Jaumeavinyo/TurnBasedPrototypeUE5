// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "WeaponDataAsset.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"


class ABaseWeapon;

UCLASS(Blueprintable)
class TURNBASEDPROTOTYPE_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

	
	
	
	//should be called from from abp animNotify. changes weapon position between body sockets
	UFUNCTION(BlueprintCallable, Category = "weapon")
	void SetCurrentSocket(FName name);
	
	//makes currentWeapon nullptr, then takes a weapon from inventory, spawns it, calls SetCurrentSocket(FName name) and makes it current
	UFUNCTION(BlueprintCallable, Category = "weapon")
	void EquipWeapon(TSubclassOf<ABaseWeapon> newWeapon, FName socket);
	
	//returns the current weapon that the character is using
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	ABaseWeapon* GetCurrentWeapon() const { return currentWeapon; }

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	UWeaponDataAsset* GetCurrentWeaponData() const { return currentWeapon ? currentWeapon->GetWeaponData() : nullptr; }


	
	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<ABaseWeapon> DefaultWeaponClass;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	ABaseWeapon* currentWeapon;

	
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void performAttack(AttackType attackType);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
		
};
