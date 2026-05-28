// Copyright Epic Games, Inc. All Rights Reserved.

#include "TurnBasedPrototypePlayerController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "TurnBasedPrototypeCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "UI/UIManager.h"
#include "Engine/LocalPlayer.h"
#include "UInteractable.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ATurnBasedPrototypePlayerController::ATurnBasedPrototypePlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
	bWantToMove = false;
	bWantToInteract = false;

	bMousePressed = false;
	currentMouseCursorSymbol = MouseSymbol::Hand;
	currentMouseHover = MouseHoverType::None;
}

void ATurnBasedPrototypePlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateMouseCursor();
}

void ATurnBasedPrototypePlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void ATurnBasedPrototypePlayerController::OnLeftClickInputStarted()
{
	
	//Can be for movement purposes or for interact purposes
	if (currentMouseHover == MouseHoverType::None)//left click means I want to move
	{
		OnMovementInputStarted();
		bWantToMove = true;
		
	}
	if (currentMouseHover == MouseHoverType::NPC_Passive)
	{
		// ASK FOR DIALOGUE START
	}
}

void ATurnBasedPrototypePlayerController::OnLeftClickInputTriggered()
{
	if (bWantToMove)
	{
		OnSetDestinationTriggered();
	}
}

void ATurnBasedPrototypePlayerController::OnLeftClickInputReleased()
{
	if (bWantToMove)
	{
		OnSetDestinationReleased();
		bWantToMove = false;
	}
}

void ATurnBasedPrototypePlayerController::OnRightClickInputStarted()
{
	FHitResult HitResult;
	bool hit = GetHitResultUnderCursor(ECC_Visibility,false,HitResult);

	AActor* HitActor = HitResult.GetActor();

	if (HitActor && HitActor->Implements<UInteractable>())
	{
		IInteractable* Interactable = Cast<IInteractable>(HitActor);
		if (Interactable)
		{
			OnClickInteractuableStarted(HitActor);
		}
	}
}

void ATurnBasedPrototypePlayerController::OnRightClickInputTriggered()
{
	
}

void ATurnBasedPrototypePlayerController::OnRightClickInputReleased()
{
}

void ATurnBasedPrototypePlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		//(Mouse click left)
		EnhancedInputComponent->BindAction(SetLeftClickAction, ETriggerEvent::Started, this, &ATurnBasedPrototypePlayerController::OnLeftClickInputStarted);
		EnhancedInputComponent->BindAction(SetLeftClickAction, ETriggerEvent::Triggered, this, &ATurnBasedPrototypePlayerController::OnLeftClickInputTriggered);
		EnhancedInputComponent->BindAction(SetLeftClickAction, ETriggerEvent::Completed, this, &ATurnBasedPrototypePlayerController::OnLeftClickInputReleased);
		EnhancedInputComponent->BindAction(SetLeftClickAction, ETriggerEvent::Canceled, this, &ATurnBasedPrototypePlayerController::OnLeftClickInputReleased);

		//(Mouse click right to interact with something)
		EnhancedInputComponent->BindAction(SetRightClickAction, ETriggerEvent::Started, this, &ATurnBasedPrototypePlayerController::OnRightClickInputStarted);
		EnhancedInputComponent->BindAction(SetRightClickAction, ETriggerEvent::Triggered, this, &ATurnBasedPrototypePlayerController::OnRightClickInputTriggered);
		EnhancedInputComponent->BindAction(SetRightClickAction, ETriggerEvent::Completed, this, &ATurnBasedPrototypePlayerController::OnRightClickInputReleased);
		EnhancedInputComponent->BindAction(SetRightClickAction, ETriggerEvent::Canceled, this, &ATurnBasedPrototypePlayerController::OnRightClickInputReleased);
		
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


//MOVEMENT
void ATurnBasedPrototypePlayerController::OnMovementInputStarted()
{
	StopMovement();
}

void ATurnBasedPrototypePlayerController::OnSetDestinationTriggered()
{
	//We mark mouse as pressed for UI visual purposes such as MouseSymbol
	bMousePressed = true;
	
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
	// Move towards mouse pointer or touch
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn != nullptr)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void ATurnBasedPrototypePlayerController::OnSetDestinationReleased()
{
	// release mouse state
	bMousePressed = false;
	
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}

	FollowTime = 0.f;
}
//!MOVEMENT

//INTERACT
void ATurnBasedPrototypePlayerController::OnClickInteractuableStarted(AActor* interactionActor)
{
	FHitResult HitResult;
	bool hit = GetHitResultUnderCursor(ECC_Visibility,false,HitResult);

	AActor* HitActor = HitResult.GetActor();
	
	if (interactionActor && interactionActor->Implements<UInteractable>())
	{
		IInteractable* Interactable = Cast<IInteractable>(interactionActor);
		if (Interactable)
		{
			Interactable->SetSupportedInteractions();//gets interactions from data asset and stores them in the interactable list
			UUIManager* UIManager = GetLocalPlayer()->GetSubsystem<UUIManager>();
			if (UIManager)
			{
				UIManager->ShowAvailableInteractionsMenu(HitActor,*(Interactable->Ainteractions));
			}
			
		}
	}
	
}

void ATurnBasedPrototypePlayerController::OnClickInteractuableTriggered()
{
	//hit
	//call UI manager to open posible interactions tab on top of the interactuable object
}

void ATurnBasedPrototypePlayerController::OnClickInteractuableReleased()
{
}
//!INTERACT


//Generates a ray to detect underneath objects and changes mouse cursor depending on it
void ATurnBasedPrototypePlayerController::UpdateMouseCursor()
{
	FHitResult HitResult;
	bool hit = GetHitResultUnderCursor(ECC_Visibility,false,HitResult);

	AActor* HitActor = HitResult.GetActor();
	if (HitActor && HitActor->Implements<UInteractable>())
	{
		
		IInteractable* Interactable = Cast<IInteractable>(HitActor);//this is bc if hitactor is a bp that implements interface but not a c++ that inherits from interface then could return nullptr
		if (Interactable)
		{
			EInteractionType InteractionType = Interactable->mainInteractionType;
			currentMouseCursorSymbol = GetMouseSymbolForInteractionType(InteractionType);
			currentMouseHover = GetMouseHoverForInteractionType(InteractionType);
			
			return;
		}
	}

	if (bMousePressed)
	{
		currentMouseCursorSymbol = MouseSymbol::ClickHand;
		
	}else
	{
		currentMouseCursorSymbol = MouseSymbol::Hand;
		currentMouseHover = MouseHoverType::None;
	}
	
}

void ATurnBasedPrototypePlayerController::HandleInteractionOrder(EInteractionType InteractionType, AActor* target)
{
	switch (InteractionType)
	{
	case EInteractionType::None:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: None"));
		break;
	case EInteractionType::Attack:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: Attack"));
		break;
	case EInteractionType::GrabObject:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: Grab"));
		break;
	case EInteractionType::Inspect:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: Inspect"));
		break;
	case EInteractionType::UseDoor:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: Open"));
		break;
	case EInteractionType::Talk:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Player wants to: Talk"));
		break;
	
	}
}

MouseSymbol ATurnBasedPrototypePlayerController::GetMouseSymbolForInteractionType(EInteractionType InteractionType)
{
	switch (InteractionType)
	{
	case EInteractionType::Talk:
		return MouseSymbol::Dialogue;//simbolo de chat
		
	case EInteractionType::Attack:
		return MouseSymbol::Attack;//simbolo espada
		
	case EInteractionType::OpenChest:
		return MouseSymbol::OpenChest;//simbolo cofre abierto
		
	case EInteractionType::UseDoor:
		return MouseSymbol::UseDoor;//simbolo puerta
		
	case EInteractionType::GrabObject:
		return MouseSymbol::Grab;//simbolo mano coger
		
	case EInteractionType::Inspect:
		return MouseSymbol::Inspect;//simbolo ojo
		
	case EInteractionType::Use:
		return MouseSymbol::Interact;//simbolo tuerca factorio
		
	default:
		return MouseSymbol::Hand;
	}
}

MouseHoverType ATurnBasedPrototypePlayerController::GetMouseHoverForInteractionType(EInteractionType InteractionType)
{
	switch (InteractionType)
	{
	case EInteractionType::Talk:
		return MouseHoverType::NPC_Passive;
		
	case EInteractionType::Attack:
		return MouseHoverType::NPC_Aggressive;
		
	case EInteractionType::OpenChest:
		return MouseHoverType::Chest;
		
	case EInteractionType::UseDoor:
		return MouseHoverType::Door;
		
	case EInteractionType::GrabObject:
		return MouseHoverType::Object;
		
	case EInteractionType::Inspect:
		return MouseHoverType::None;
		
	case EInteractionType::Use:
		return MouseHoverType::Object;
		
	default:
		return MouseHoverType::None;
	}
}





