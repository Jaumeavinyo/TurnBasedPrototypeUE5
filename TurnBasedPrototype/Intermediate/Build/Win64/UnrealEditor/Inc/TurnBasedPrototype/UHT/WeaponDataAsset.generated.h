// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNBASEDPROTOTYPE_WeaponDataAsset_generated_h
#error "WeaponDataAsset.generated.h already included, missing '#pragma once' in WeaponDataAsset.h"
#endif
#define TURNBASEDPROTOTYPE_WeaponDataAsset_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponAnim_Statics; \
	TURNBASEDPROTOTYPE_API static class UScriptStruct* StaticStruct();


template<> TURNBASEDPROTOTYPE_API UScriptStruct* StaticStruct<struct FWeaponAnim>();

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponDataAsset(); \
	friend struct Z_Construct_UClass_UWeaponDataAsset_Statics; \
public: \
	DECLARE_CLASS(UWeaponDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(UWeaponDataAsset)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponDataAsset(UWeaponDataAsset&&); \
	UWeaponDataAsset(const UWeaponDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponDataAsset) \
	NO_API virtual ~UWeaponDataAsset();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_46_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_49_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class UWeaponDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h


#define FOREACH_ENUM_WEAPONATTACKTYPE(op) \
	op(WeaponAttackType::Melee) \
	op(WeaponAttackType::Ranged) 

enum class WeaponAttackType : uint8;
template<> struct TIsUEnumClass<WeaponAttackType> { enum { Value = true }; };
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<WeaponAttackType>();

#define FOREACH_ENUM_WEAPONTYPE(op) \
	op(WeaponType::GreatSword) \
	op(WeaponType::Sword) \
	op(WeaponType::Dagger) \
	op(WeaponType::Stick) 

enum class WeaponType : uint8;
template<> struct TIsUEnumClass<WeaponType> { enum { Value = true }; };
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<WeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
