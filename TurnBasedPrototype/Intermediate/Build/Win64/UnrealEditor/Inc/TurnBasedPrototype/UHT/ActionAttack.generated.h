// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UAnimMontage;
class UAttackDataAsset;
class UWeaponDataAsset;
#ifdef TURNBASEDPROTOTYPE_ActionAttack_generated_h
#error "ActionAttack.generated.h already included, missing '#pragma once' in ActionAttack.h"
#endif
#define TURNBASEDPROTOTYPE_ActionAttack_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAttackActionValues); \
	DECLARE_FUNCTION(execisPlayingAnimMontage); \
	DECLARE_FUNCTION(execGetControllerFromPerformer); \
	DECLARE_FUNCTION(execFinishAction); \
	DECLARE_FUNCTION(execPerformAction); \
	DECLARE_FUNCTION(execOnInitialize);


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionAttack(); \
	friend struct Z_Construct_UClass_UActionAttack_Statics; \
public: \
	DECLARE_CLASS(UActionAttack, UBaseAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(UActionAttack)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActionAttack(UActionAttack&&); \
	UActionAttack(const UActionAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionAttack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionAttack) \
	NO_API virtual ~UActionAttack();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_14_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class UActionAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
