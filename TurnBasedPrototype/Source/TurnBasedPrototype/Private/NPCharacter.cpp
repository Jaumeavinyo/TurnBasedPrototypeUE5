// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCharacter.h"

ANPCharacter::ANPCharacter()
{
	Ainteractions = new TArray<EInteractionType>();//cant do this in interface bc interfaces dont have constructors, so must be initialized in all interactable objects
	
}

void ANPCharacter::BeginPlay()
{
	Super::BeginPlay();
	SetSupportedInteractions();  
}

TArray<EInteractionType>*  ANPCharacter::GetSupportedInteractions() const
{
	Ainteractions->Empty();//reset
	for (EInteractionType Interaction : NPC_Data->interactions)
	{
		Ainteractions->Add(Interaction);
	}
	return Ainteractions;
}

void ANPCharacter::SetSupportedInteractions() 
{
	mainInteractionType = NPC_Data->mainInteraction;
	Ainteractions->Empty();//reset
	for (EInteractionType Interaction : NPC_Data->interactions)
	{
		Ainteractions->Add(Interaction);
	}
}


TArray<EInteractionType> ANPCharacter::GetSupportedInteractions()
{
	return NPC_Data->interactions;
}
