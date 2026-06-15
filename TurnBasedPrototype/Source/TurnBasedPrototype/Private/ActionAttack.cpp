// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionAttack.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BaseCharacter.h"

void UActionAttack::OnInitialize()
{
	Super::OnInitialize();
	
	actionPerformer = Cast<ABaseCharacter>(ActionContext.Performer);
	bIsWeaponDrawed = actionPerformer->bWeaponDrawed;
	IsMoving = false; //does not matter if character already moving somewhere, this is to know if started movement to destination
	
	state = ActionState::Perform;
}

void UActionAttack::PerformAction()
{
	Super::PerformAction();

	//first check if character has the weapon drawed
	if (!bIsWeaponDrawed)
	{
		actionPerformer->DrawWeapon(WeaponData->DefaultWeaponDrawedSocket);
		bIsWeaponDrawed = true;
		return;
	}

	// Wait draw animation 
	if (isPlayingAnimMontage(WeaponData->DrawWeaponAnim))
	{
		return; 
	}
	
	//Check if the character in range of the attack is doing
	float Distance = FVector::Dist(ActionContext.Performer->GetActorLocation(), ActionContext.TargetActor->GetActorLocation());
	
	if (!IsMoving && Distance > 170)
	{
		AController* Controller = GetControllerFromPerformer();
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, ActionContext.TargetActor->GetActorLocation());
		IsMoving = true;
		return;
	}

	//Arrived to range, stop movement
	if (IsMoving && Distance <= 170)
	{
		AController* Controller = GetControllerFromPerformer();
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, ActionContext.Performer->GetActorLocation());
		IsMoving = false;
	}
	
	//Find the correct animation for AttackType
	if (!IsMoving && Distance <= 170 && !attackInProcess)
	{
		
		for (const FWeaponAnim& WeaponAnim : WeaponData->weaponAnims)
		{
			if (WeaponAnim.attackType == AttackType)
			{
				AttackAnimMontage = WeaponAnim.animMontage;
				break;
			}
		}
        
		if (AttackAnimMontage)
		{
			Cast<ABaseCharacter>(ActionContext.Performer)->PlayAnimMontage(AttackAnimMontage);
			attackInProcess = true;
			// Don't set to Finish wait for animation to complete
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No animation found for AttackType: %d"), (int32)AttackType);
			state = ActionState::Finish; // Fail, close action
		}
	}
    
	//Wait for attack animation to finish
	if (attackInProcess && !isPlayingAnimMontage(AttackAnimMontage))
	{
		// TODO: Animation finished, apply damage
		state = ActionState::Finish;
	}
	
}

void UActionAttack::FinishAction()
{
	Super::FinishAction();
	state = ActionState::Close;
}

AController* UActionAttack::GetControllerFromPerformer()
{
	//Performer is a Pawn character or npc
	if (APawn* Pawn = Cast<APawn>(ActionContext.Performer))
	{
		return Pawn->GetController();
	}
	
	return nullptr;
}

bool UActionAttack::isPlayingAnimMontage(UAnimMontage* montage)
{
	if (ACharacter* Character = Cast<ACharacter>(actionPerformer))
	{
		if (UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance())
		{
			if (AnimInstance->Montage_IsPlaying(montage))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}
