// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInteractionType : uint8;
#ifdef TURNBASEDPROTOTYPE_Chest_generated_h
#error "Chest.generated.h already included, missing '#pragma once' in Chest.h"
#endif
#define TURNBASEDPROTOTYPE_Chest_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSupportedInteractions);


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_CALLBACK_WRAPPERS
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChest(); \
	friend struct Z_Construct_UClass_AChest_Statics; \
public: \
	DECLARE_CLASS(AChest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(AChest) \
	virtual UObject* _getUObject() const override { return const_cast<AChest*>(this); }


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChest(AChest&&); \
	AChest(const AChest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChest) \
	NO_API virtual ~AChest();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_12_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_CALLBACK_WRAPPERS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class AChest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
