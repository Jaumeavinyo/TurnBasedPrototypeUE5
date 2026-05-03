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
#include "Engine/LocalPlayer.h"
#include "UInteractable.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ATurnBasedPrototypePlayerController::ATurnBasedPrototypePlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;

	bMousePressed = false;
	currentMouseCursor = MouseSymbol::Hand;
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
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &ATurnBasedPrototypePlayerController::OnMovementInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &ATurnBasedPrototypePlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &ATurnBasedPrototypePlayerController::OnSetDestinationReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &ATurnBasedPrototypePlayerController::OnSetDestinationReleased);

		//(Mouse click right to interact with something)
		EnhancedInputComponent->BindAction(SetClickOnInteractuableAction, ETriggerEvent::Started, this, &ATurnBasedPrototypePlayerController::OnClickInteractuableStarted);
		EnhancedInputComponent->BindAction(SetClickOnInteractuableAction, ETriggerEvent::Triggered, this, &ATurnBasedPrototypePlayerController::OnClickInteractuableTriggered);
		EnhancedInputComponent->BindAction(SetClickOnInteractuableAction, ETriggerEvent::Completed, this, &ATurnBasedPrototypePlayerController::OnClickInteractuableReleased);
		EnhancedInputComponent->BindAction(SetClickOnInteractuableAction, ETriggerEvent::Canceled, this, &ATurnBasedPrototypePlayerController::OnClickInteractuableReleased);
		
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ATurnBasedPrototypePlayerController::OnMovementInputStarted()
{
	StopMovement();
}

// Triggered every frame when the input is held down
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

void ATurnBasedPrototypePlayerController::OnClickInteractuableStarted()
{
	FHitResult HitResult;
	bool hit = GetHitResultUnderCursor(ECC_Visibility,false,HitResult);

	AActor* HitActor = HitResult.GetActor();

	if (HitActor && HitActor->Implements<UInteractable>())
	{
		IInteractable* Interactable = Cast<IInteractable>(HitActor);
		if (Interactable)
		{
			//ASK interactuable for their interactions
			UE_LOG(LogTemp, Warning, TEXT("ASKING ACTOR FOR ITS INTERACTIONS"));
			return;
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
			//TODO interactable can be an anything, create those cases here when developing doors chests enemies etc
			currentMouseCursor = MouseSymbol::Dialogue;
			
			return;
		}
	}

	
	if (bMousePressed)
	{
		currentMouseCursor = MouseSymbol::ClickHand;
	}else
	{
		currentMouseCursor = MouseSymbol::Hand;
	}
	
}





