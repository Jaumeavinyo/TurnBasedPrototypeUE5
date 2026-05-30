// Fill out your copyright notice in the Description page of Project Settings.


#include "Chest.h"

// Sets default values
AChest::AChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ChestMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ChestMesh"));
	RootComponent = ChestMeshComponent;

	ChestMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ChestMeshComponent->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	ChestMeshComponent->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);


	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	CollisionBox->SetupAttachment(RootComponent);
	
	Ainteractions = new TArray<EInteractionType>();
}

void AChest::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	if (ChestData && ChestData->SkeletalMesh)
	{
		ChestMeshComponent->SetSkeletalMesh(ChestData->SkeletalMesh);
		openChestAnim = ChestData->OpenChestAnim;


		
	}
}

// Called when the game starts or when spawned
void AChest::BeginPlay()
{
	Super::BeginPlay();
	SetSupportedInteractions();
}

// Called every frame
void AChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<EInteractionType>* AChest::GetSupportedInteractions() const
{
	Ainteractions->Empty();//reset
	for (EInteractionType Interaction : ChestData->interactions)
	{
		Ainteractions->Add(Interaction);
	}
	return Ainteractions;
}

void AChest::SetSupportedInteractions()
{
	mainInteractionType = ChestData->mainInteraction;
	Ainteractions->Empty();//reset
	for (EInteractionType Interaction : ChestData->interactions)
	{
		Ainteractions->Add(Interaction);
	}
	
}

TArray<EInteractionType> AChest::GetSupportedInteractions()
{
	return ChestData->interactions;
}



