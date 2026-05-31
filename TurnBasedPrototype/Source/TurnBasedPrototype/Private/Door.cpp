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
	
	
}

void ADoor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	if (DoorData && DoorData->DoorMesh)
	{
		SetSupportedInteractions();
	}
	
	// Set default interaction type
	mainInteractionType = EInteractionType::UseDoor;
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
	

	
	
}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
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
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: UseDoor"));
	}
	else
	{
		OpenDoor();
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: UseDoor"));
	}
	bIsOpen =! bIsOpen;
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