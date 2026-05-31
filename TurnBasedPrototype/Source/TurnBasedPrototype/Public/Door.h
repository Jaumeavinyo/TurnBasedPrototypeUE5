// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "UInteractable.h"
#include "GameFramework/Actor.h"
#include "DoorDataAsset.h"
#include "Components/TimelineComponent.h"
#include "Door.generated.h"

UCLASS()
class TURNBASEDPROTOTYPE_API ADoor : public AActor, public IInteractable
{
	GENERATED_BODY()
public:	
	ADoor();
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// IInteractable interface
	virtual TArray<EInteractionType>* GetSupportedInteractions() const override;
	virtual void SetSupportedInteractions() override;

	// Blueprint callable version
	UFUNCTION(BlueprintCallable, Category = "Interactions")
	TArray<EInteractionType> GetSupportedInteractionsBP();

	// Open/Close functions
	UFUNCTION(BlueprintCallable, Category = "Door")
	void OpenDoor();
	
	UFUNCTION(BlueprintCallable, Category = "Door")
	void CloseDoor();
	
	UFUNCTION(BlueprintCallable, Category = "Door")
	void ToggleDoor();

	// Timeline callback functions
	UFUNCTION()
	void OnDoorRotateUpdate(float Value);
	
	UFUNCTION()
	void OnDoorRotateFinished();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Door")
	bool bIsOpen;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Door")
	bool bIsMoving;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionBox;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DoorMesh")
	UStaticMeshComponent* DoorMeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Door Data")
	UDoorDataAsset* DoorData;

	// Rotation settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door Rotation")
	float OpenAngle = 90.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door Rotation")
	float RotationSpeed = 2.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door Rotation")
	UCurveFloat* RotationCurve;

	// Which way the door opens
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door Rotation")
	bool bOpenClockwise = true;

protected:
	FTimeline DoorTimeline;
	
	FRotator ClosedRotation;
	FRotator OpenRotationTarget;
	
private:
	void SetupRotationTargets();
	void StartRotation(bool bToOpen);

};
