// Fill out your copyright notice in the Description page of Project Settings.

#include "Door.h"
#include "DoorDataAsset.h"
#include "Components/TimelineComponent.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = true;
	
	DoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMeshComponent;
	
	// collision
	DoorMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	DoorMeshComponent->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	DoorMeshComponent->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	DoorMeshComponent->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 150.0f)); // larger than door for easier clicking
	
	// Init
	Ainteractions = new TArray<EInteractionType>();
	bIsOpen = false;
	bIsMoving = false;
	
	// Timeline delegate 
	FOnTimelineFloat TimelineCallback;
	TimelineCallback.BindUFunction(this, FName("OnDoorRotateUpdate"));
	DoorTimeline.AddInterpFloat(RotationCurve, TimelineCallback);
	
	FOnTimelineEvent TimelineFinishedCallback;
	TimelineFinishedCallback.BindUFunction(this, FName("OnDoorRotateFinished"));
	DoorTimeline.SetTimelineFinishedFunc(TimelineFinishedCallback);
}

void ADoor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	if (DoorData && DoorData->DoorMesh)
	{
		DoorMeshComponent->SetStaticMesh(DoorData->DoorMesh);
	}
	
	// Set default interaction type
	mainInteractionType = EInteractionType::UseDoor;
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
	//initial rot
	ClosedRotation = GetActorRotation();
	SetupRotationTargets();
	SetSupportedInteractions();
	
	//timeline with curve 
	if (RotationCurve)
	{
		float MinTime, MaxTime;
		RotationCurve->GetTimeRange(MinTime, MaxTime);
		DoorTimeline.SetTimelineLength(MaxTime);
	}
	else
	{
		DoorTimeline.SetTimelineLength(1.0f);
	}
	DoorTimeline.SetPlayRate(RotationSpeed);
}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (DoorTimeline.IsPlaying())
	{
		DoorTimeline.TickTimeline(DeltaTime);
	}
}

void ADoor::SetupRotationTargets()
{
	FRotator OpenRotation = ClosedRotation;
	if (bOpenClockwise)
	{
		OpenRotation.Yaw += OpenAngle;
	}
	else
	{
		OpenRotation.Yaw -= OpenAngle;
	}
	
	OpenRotationTarget = OpenRotation;
}

void ADoor::StartRotation(bool bToOpen)
{
	if (bIsMoving) return;
	
	bIsMoving = true;
	
	if (RotationCurve)
	{
		DoorTimeline.Play();
	}
	
	if (bToOpen)
	{
		DoorTimeline.SetPlayRate(RotationSpeed);
		DoorTimeline.Play();
	}
	else
	{
		DoorTimeline.SetPlayRate(RotationSpeed);
		DoorTimeline.Reverse();
	}
}

void ADoor::OnDoorRotateUpdate(float Value)
{
	// Interpolate
	FRotator NewRotation;
	
	if (!bIsOpen)
	{
		//interpolate from Closed to Open
		NewRotation = FMath::Lerp(ClosedRotation, OpenRotationTarget, Value);
	}
	else
	{
		//interpolate from Open to Closed
		NewRotation = FMath::Lerp(OpenRotationTarget, ClosedRotation, Value);
	}
	
	SetActorRotation(NewRotation);
}

void ADoor::OnDoorRotateFinished()
{
	bIsMoving = false;
	
	// Update state based on current rotation
	float CurrentYaw = GetActorRotation().Yaw;
	float ClosedYaw = ClosedRotation.Yaw;
	float OpenYaw = OpenRotationTarget.Yaw;
	
	// Check if door is at open position (within tolerance)
	if (FMath::IsNearlyEqual(CurrentYaw, OpenYaw, 1.0f))
	{
		bIsOpen = true;
	}
	else if (FMath::IsNearlyEqual(CurrentYaw, ClosedYaw, 1.0f))
	{
		bIsOpen = false;
	}
}

void ADoor::OpenDoor()
{
	if (bIsOpen || bIsMoving) return;
	StartRotation(true);
}

void ADoor::CloseDoor()
{
	if (!bIsOpen || bIsMoving) return;
	StartRotation(false);
}

void ADoor::ToggleDoor()
{
	if (bIsOpen)
	{
		CloseDoor();
	}
	else
	{
		OpenDoor();
	}
}

TArray<EInteractionType>* ADoor::GetSupportedInteractions() const
{
	Ainteractions->Empty();
	
	if (DoorData)
	{
		for (EInteractionType Interaction : DoorData->interactions)
		{
			Ainteractions->Add(Interaction);
		}
	}
	
	return Ainteractions;
}

void ADoor::SetSupportedInteractions()
{
	if (DoorData)
	{
		mainInteractionType = DoorData->mainInteraction;
		Ainteractions->Empty();
		
		for (EInteractionType Interaction : DoorData->interactions)
		{
			Ainteractions->Add(Interaction);
		}
	}
}

TArray<EInteractionType> ADoor::GetSupportedInteractionsBP()
{
	if (Ainteractions && Ainteractions->Num() > 0)
	{
		return *Ainteractions;
	}
	return TArray<EInteractionType>();
}