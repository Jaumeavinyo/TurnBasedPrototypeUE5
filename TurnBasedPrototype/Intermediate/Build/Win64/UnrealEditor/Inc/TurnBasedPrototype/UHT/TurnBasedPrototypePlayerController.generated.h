// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedPrototypePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class MouseSymbol : uint8;
#ifdef TURNBASEDPROTOTYPE_TurnBasedPrototypePlayerController_generated_h
#error "TurnBasedPrototypePlayerController.generated.h already included, missing '#pragma once' in TurnBasedPrototypePlayerController.h"
#endif
#define TURNBASEDPROTOTYPE_TurnBasedPrototypePlayerController_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMouseSymbol);


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnBasedPrototypePlayerController(); \
	friend struct Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics; \
public: \
	DECLARE_CLASS(ATurnBasedPrototypePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(ATurnBasedPrototypePlayerController)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATurnBasedPrototypePlayerController(ATurnBasedPrototypePlayerController&&); \
	ATurnBasedPrototypePlayerController(const ATurnBasedPrototypePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnBasedPrototypePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnBasedPrototypePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnBasedPrototypePlayerController) \
	NO_API virtual ~ATurnBasedPrototypePlayerController();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_45_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_48_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class ATurnBasedPrototypePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h


#define FOREACH_ENUM_MOUSESYMBOL(op) \
	op(MouseSymbol::None) \
	op(MouseSymbol::Hand) \
	op(MouseSymbol::ClickHand) \
	op(MouseSymbol::Dialogue) \
	op(MouseSymbol::Grab) \
	op(MouseSymbol::Inspect) \
	op(MouseSymbol::Interact) \
	op(MouseSymbol::UseDoor) \
	op(MouseSymbol::OpenChest) \
	op(MouseSymbol::Attack) 

enum class MouseSymbol : uint8;
template<> struct TIsUEnumClass<MouseSymbol> { enum { Value = true }; };
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<MouseSymbol>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
