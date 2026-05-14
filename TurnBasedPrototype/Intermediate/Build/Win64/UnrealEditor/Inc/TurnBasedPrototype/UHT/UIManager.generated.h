// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UIManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EInteractionType : uint8;
#ifdef TURNBASEDPROTOTYPE_UIManager_generated_h
#error "UIManager.generated.h already included, missing '#pragma once' in UIManager.h"
#endif
#define TURNBASEDPROTOTYPE_UIManager_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideAvailableInteractionsMenu); \
	DECLARE_FUNCTION(execShowAvailableInteractionsMenu); \
	DECLARE_FUNCTION(execOnInteractionSelected);


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIManager(); \
	friend struct Z_Construct_UClass_UUIManager_Statics; \
public: \
	DECLARE_CLASS(UUIManager, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(UUIManager)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIManager(UUIManager&&); \
	UUIManager(const UUIManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIManager) \
	NO_API virtual ~UUIManager();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_31_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class UUIManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
