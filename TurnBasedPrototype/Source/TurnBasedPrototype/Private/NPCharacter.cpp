// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCharacter.h"

TArray<EInteractionType>* ANPCharacter::GetSupportedInteractions() const
{
	//_TODO designers should be able when creating an NPC to set its initial state "Pacific, agressive etc" and this should affect interaction list or else
	//designers should also be able to seet the interactions available from BP.
	Ainteractions->Add(EInteractionType::Attack);
	Ainteractions->Add(EInteractionType::Talk);

	return Ainteractions;
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
