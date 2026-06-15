// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "UInteractable.h"
#include "UI/InteractionMenuWidget.h"
#include "TurnBasedPrototypePlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

UENUM(BlueprintType)
enum class MouseSymbol : uint8
{
	None UMETA(DisplayName = "none"),
	Hand UMETA(DisplayName = "Hand"),
	ClickHand UMETA(DisplayName = "ClickHand"),
	Dialogue UMETA(DisplayName = "Dialogue"),
	Grab UMETA(DisplayName = "Grab"),
	Inspect UMETA(DisplayName = "Inspect"),
	Interact UMETA(DisplayName = "Interact"),
	UseDoor UMETA(DisplayName = "UseDoor"),
	OpenChest UMETA(DisplayName = "OpenChest"),
	Attack UMETA(DisplayName = "Attack")
};

enum class MouseHoverType : uint8
{
	None UMETA(DisplayName = "none"),//normal hand 
	NPC_Passive UMETA(DisplayName = "NPC_Passive"),
	NPC_Aggressive UMETA(DisplayName = "NPC_Aggressive"),
	Door UMETA(DisplayName = "Door"),
	Chest UMETA(DisplayName = "Chest"),
	Object UMETA(DisplayName = "Object")
};

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class ATurnBasedPrototypePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATurnBasedPrototypePlayerController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/** Time Threshold to know if it was a short press */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	
	/** move to Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	//UInputAction* SetDestinationClickAction;
	UInputAction* SetLeftClickAction;
	
	/** Input action for mouse right click, used for "more info", "interections" etc*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetRightClickAction;


	void HandleInteractionOrder(EInteractionType InteractionType, AActor* target);


	// UI 
	
	MouseSymbol GetMouseSymbolForInteractionType(EInteractionType InteractionType);
	
	MouseHoverType GetMouseHoverForInteractionType(EInteractionType InteractionType);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction UI")
	TSubclassOf<UInteractionMenuWidget> CurrentInteractionMenuWidget;

	
protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	MouseSymbol currentMouseCursorSymbol;
	MouseHoverType currentMouseHover;
	
	bool bMousePressed;
	
	virtual void SetupInputComponent() override;
	
	// To add mapping context
	virtual void BeginPlay();


	//LEFT AND RIGHT CLICK MAIN FUNCTIONS
	void OnLeftClickInputStarted();
	void OnLeftClickInputTriggered();
	void OnLeftClickInputReleased();

	void OnRightClickInputStarted();
	void OnRightClickInputTriggered();
	void OnRightClickInputReleased();
	
	/** Input handlers for SetDestination action. */
	bool bWantToMove;
	void OnMovementInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();

	bool bWantToInteract;
	void OnClickInteractuableStarted(AActor* interactionActor);
	void OnClickInteractuableTriggered();
	void OnClickInteractuableReleased();

	void UpdateMouseCursor();

	


	UFUNCTION(BlueprintCallable, Category = "Getter")
	MouseSymbol GetMouseSymbol(){return currentMouseCursorSymbol;};
	
private:
	FVector CachedDestination;
	

	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
};


