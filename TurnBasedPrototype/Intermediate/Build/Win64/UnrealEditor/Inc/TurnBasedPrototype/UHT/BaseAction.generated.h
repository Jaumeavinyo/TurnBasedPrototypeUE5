// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameManager/BaseAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FActionContext;
#ifdef TURNBASEDPROTOTYPE_BaseAction_generated_h
#error "BaseAction.generated.h already included, missing '#pragma once' in BaseAction.h"
#endif
#define TURNBASEDPROTOTYPE_BaseAction_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionContext_Statics; \
	TURNBASEDPROTOTYPE_API static class UScriptStruct* StaticStruct();


template<> TURNBASEDPROTOTYPE_API UScriptStruct* StaticStruct<struct FActionContext>();

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeAction);


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAction(); \
	friend struct Z_Construct_UClass_UBaseAction_Statics; \
public: \
	DECLARE_CLASS(UBaseAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(UBaseAction)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseAction(UBaseAction&&); \
	UBaseAction(const UBaseAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAction) \
	NO_API virtual ~UBaseAction();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_23_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class UBaseAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
