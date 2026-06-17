// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttackDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNBASEDPROTOTYPE_AttackDataAsset_generated_h
#error "AttackDataAsset.generated.h already included, missing '#pragma once' in AttackDataAsset.h"
#endif
#define TURNBASEDPROTOTYPE_AttackDataAsset_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackDataAsset(); \
	friend struct Z_Construct_UClass_UAttackDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAttackDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(UAttackDataAsset)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttackDataAsset(UAttackDataAsset&&); \
	UAttackDataAsset(const UAttackDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackDataAsset) \
	NO_API virtual ~UAttackDataAsset();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_29_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class UAttackDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h


#define FOREACH_ENUM_ATTACKTYPE(op) \
	op(AttackType::WeaponLight) \
	op(AttackType::WeaponHeavy) \
	op(AttackType::Special) 

enum class AttackType : uint8;
template<> struct TIsUEnumClass<AttackType> { enum { Value = true }; };
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<AttackType>();

#define FOREACH_ENUM_ATTACKDAMAGETYPE(op) \
	op(AttackDamageType::Physical) \
	op(AttackDamageType::Magical) 

enum class AttackDamageType : uint8;
template<> struct TIsUEnumClass<AttackDamageType> { enum { Value = true }; };
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<AttackDamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
