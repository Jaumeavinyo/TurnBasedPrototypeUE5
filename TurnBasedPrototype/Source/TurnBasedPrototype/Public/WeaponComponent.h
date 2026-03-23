// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"


UCLASS(Blueprintable)
class TURNBASEDPROTOTYPE_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

	UFUNCTION(BlueprintCallable, Category = "weapon")//saves curr weapon to the inventory and takes a weapon from the inventory as current
	void SetCurrentWeapon(UWeaponDataAsset* NewWeapon);
	
	UFUNCTION(BlueprintCallable, Category = "weapon")//play anim to equip weapon (when combat state)
	void EquipWeapon(FText socket);
	
	UFUNCTION(BlueprintCallable, Category = "weapon")//play anim to unequip weapon (when combat state)
	void UnEquipWeapon(FText socket);
	
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	UWeaponDataAsset* GetCurrentWeapon() const { return CurrentWeapon; }


	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	UStaticMeshComponent* WeaponMesh;//called from abp
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	UWeaponDataAsset* CurrentWeapon;//called from abp

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void performAttack(AttackType attackType);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
		
};
