// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPCDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNBASEDPROTOTYPE_NPCDataAsset_generated_h
#error "NPCDataAsset.generated.h already included, missing '#pragma once' in NPCDataAsset.h"
#endif
#define TURNBASEDPROTOTYPE_NPCDataAsset_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCDataAsset(); \
	friend struct Z_Construct_UClass_UNPCDataAsset_Statics; \
public: \
	DECLARE_CLASS(UNPCDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(UNPCDataAsset)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNPCDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNPCDataAsset(UNPCDataAsset&&); \
	UNPCDataAsset(const UNPCDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCDataAsset) \
	NO_API virtual ~UNPCDataAsset();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_22_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class UNPCDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h


#define FOREACH_ENUM_NPCSTATE(op) \
	op(NPCState::Pasive) \
	op(NPCState::Agressive) \
	op(NPCState::Special) 

enum class NPCState : uint8;
template<> struct TIsUEnumClass<NPCState> { enum { Value = true }; };
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<NPCState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
