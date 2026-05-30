// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "UInteractable.h"
#include "ChestDataAsset.h"
#include "GameFramework/Actor.h"
#include "Chest.generated.h"

UCLASS()
class TURNBASEDPROTOTYPE_API AChest : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChest();
	 void PostInitializeComponents();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual TArray<EInteractionType>* GetSupportedInteractions() const override;
	virtual void SetSupportedInteractions()  override;

	UFUNCTION(BlueprintCallable, Category = "interactions")
	TArray<EInteractionType> GetSupportedInteractions();//This function is called by UI to show player interaction options when selecting an npc

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionBox;
	
	UPROPERTY(EditAnywhere, Category = "ChestMesh")
	USkeletalMesh* ChestMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ChestMesh")
	USkeletalMeshComponent* ChestMeshComponent;
	
	UPROPERTY(EditAnywhere, Category = "Chest Data")
	UChestDataAsset* ChestData;

	UPROPERTY(BlueprintReadWrite , Category = "Animation")
	UAnimMontage* openChestAnim;
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void OnChestOpenOrder();
	
};
