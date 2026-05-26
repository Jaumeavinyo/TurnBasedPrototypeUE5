// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCharacter.h"

ANPCharacter::ANPCharacter()
{
	Ainteractions = new TArray<EInteractionType>();//cant do this in interface bc interfaces dont have constructors, so must be initialized in all interactable objects
}

TArray<EInteractionType>*  ANPCharacter::GetSupportedInteractions() const
{

	for (EInteractionType Interaction : NPC_Data->interactions)
	{
		Ainteractions->Add(Interaction);
	}
	return Ainteractions;
}

void ANPCharacter::SetSupportedInteractions() const
{
	for (EInteractionType Interaction : NPC_Data->interactions)
	{
		Ainteractions->Add(Interaction);
	}
}

void ANPCharacter::Interact(EInteractionType interactionType, AActor* instigator)
{
	if (!NPC_Data->interactions.Contains((interactionType)))
	{
			return;
	}

	switch (interactionType)
	{
	case EInteractionType::Talk:
		// call GameManagerEvent startconversation(NPC_Data->dialogue tree)
		break;
	case EInteractionType::Attack:
		// validate attack and call "Attack" function from instigator(playerr)
		break;
	case EInteractionType::Inspect:
		// show info
		break;
	default:
		break;
	}
}

TArray<EInteractionType> ANPCharacter::GetSupportedInteractions()
{
	return NPC_Data->interactions;
}
