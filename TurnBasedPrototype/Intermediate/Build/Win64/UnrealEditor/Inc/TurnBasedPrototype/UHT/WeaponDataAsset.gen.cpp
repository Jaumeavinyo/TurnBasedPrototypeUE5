// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/WeaponDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_AttackType();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_WeaponType();
TURNBASEDPROTOTYPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Enum WeaponType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_WeaponType;
static UEnum* WeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_WeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_WeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_WeaponType, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("WeaponType"));
	}
	return Z_Registration_Info_UEnum_WeaponType.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<WeaponType>()
{
	return WeaponType_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_WeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WEAPON INFO\n" },
#endif
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "WeaponType::Melee" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "WeaponType::Ranged" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPON INFO" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WeaponType::Melee", (int64)WeaponType::Melee },
		{ "WeaponType::Ranged", (int64)WeaponType::Ranged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_WeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"WeaponType",
	"WeaponType",
	Z_Construct_UEnum_TurnBasedPrototype_WeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_WeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_WeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_WeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_WeaponType()
{
	if (!Z_Registration_Info_UEnum_WeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_WeaponType.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_WeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_WeaponType.InnerSingleton;
}
// End Enum WeaponType

// Begin Enum WeaponDamageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_WeaponDamageType;
static UEnum* WeaponDamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_WeaponDamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_WeaponDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("WeaponDamageType"));
	}
	return Z_Registration_Info_UEnum_WeaponDamageType.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<WeaponDamageType>()
{
	return WeaponDamageType_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Magical.DisplayName", "Magic" },
		{ "Magical.Name", "WeaponDamageType::Magical" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
		{ "Physical.DisplayName", "Physical" },
		{ "Physical.Name", "WeaponDamageType::Physical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WeaponDamageType::Physical", (int64)WeaponDamageType::Physical },
		{ "WeaponDamageType::Magical", (int64)WeaponDamageType::Magical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"WeaponDamageType",
	"WeaponDamageType",
	Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType()
{
	if (!Z_Registration_Info_UEnum_WeaponDamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_WeaponDamageType.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_WeaponDamageType.InnerSingleton;
}
// End Enum WeaponDamageType

// Begin Enum AttackType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AttackType;
static UEnum* AttackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AttackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AttackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_AttackType, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("AttackType"));
	}
	return Z_Registration_Info_UEnum_AttackType.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<AttackType>()
{
	return AttackType_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_AttackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WEAPON ANIMS\n" },
#endif
		{ "Heavy.DisplayName", "Heavy" },
		{ "Heavy.Name", "AttackType::Heavy" },
		{ "Light.DisplayName", "Light" },
		{ "Light.Name", "AttackType::Light" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
		{ "Special.DisplayName", "Special" },
		{ "Special.Name", "AttackType::Special" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPON ANIMS" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AttackType::Light", (int64)AttackType::Light },
		{ "AttackType::Heavy", (int64)AttackType::Heavy },
		{ "AttackType::Special", (int64)AttackType::Special },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_AttackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"AttackType",
	"AttackType",
	Z_Construct_UEnum_TurnBasedPrototype_AttackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_AttackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_AttackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_AttackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_AttackType()
{
	if (!Z_Registration_Info_UEnum_AttackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AttackType.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_AttackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AttackType.InnerSingleton;
}
// End Enum AttackType

// Begin ScriptStruct FWeaponAnim
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponAnim;
class UScriptStruct* FWeaponAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAnim, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("WeaponAnim"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponAnim.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UScriptStruct* StaticStruct<FWeaponAnim>()
{
	return FWeaponAnim::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[] = {
		{ "Category", "type" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_animMontage_MetaData[] = {
		{ "Category", "anim" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_attackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_animMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAnim>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnim, attackType), Z_Construct_UEnum_TurnBasedPrototype_AttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attackType_MetaData), NewProp_attackType_MetaData) }; // 456875713
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_animMontage = { "animMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnim, animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_animMontage_MetaData), NewProp_animMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_attackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_attackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_animMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	&NewStructOps,
	"WeaponAnim",
	Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers),
	sizeof(FWeaponAnim),
	alignof(FWeaponAnim),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponAnim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponAnim.InnerSingleton, Z_Construct_UScriptStruct_FWeaponAnim_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponAnim.InnerSingleton;
}
// End ScriptStruct FWeaponAnim

// Begin Class UWeaponDataAsset
void UWeaponDataAsset::StaticRegisterNativesUWeaponDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponDataAsset);
UClass* Z_Construct_UClass_UWeaponDataAsset_NoRegister()
{
	return UWeaponDataAsset::StaticClass();
}
struct Z_Construct_UClass_UWeaponDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~WEAPON ANIMS\n" },
#endif
		{ "IncludePath", "WeaponDataAsset.h" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~WEAPON ANIMS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WEAPON GAME OBJECT\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPON GAME OBJECT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UMaterial interface is parent to all material type clases, this allows to use UMaterial, UMaterialInstance, UMaterialInstanceDinamic\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMaterial interface is parent to all material type clases, this allows to use UMaterial, UMaterialInstance, UMaterialInstanceDinamic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIcon_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponAnims_MetaData[] = {
		{ "Category", "Animations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WEAPON DATA\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPON DATA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_equipWeaponAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheathingWeaponAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAttachSocket_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryAttachSocket_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageDice_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//COMBAT STATS\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COMBAT STATS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numberOfDices_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponName_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GAME DATA\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAME DATA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponDescription_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponAnims_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_weaponAnims;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_equipWeaponAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SheathingWeaponAnim;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CombatAttachSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CarryAttachSocket;
	static const UECodeGen_Private::FIntPropertyParams NewProp_damageDice;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfDices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_weaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_weaponType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_damageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_damageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weaponRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_weaponName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_weaponDescription;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rarity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, WeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIcon_MetaData), NewProp_WeaponIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAnims_Inner = { "weaponAnims", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(0, nullptr) }; // 4110656983
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAnims = { "weaponAnims", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponAnims), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponAnims_MetaData), NewProp_weaponAnims_MetaData) }; // 4110656983
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_equipWeaponAnim = { "equipWeaponAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, equipWeaponAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_equipWeaponAnim_MetaData), NewProp_equipWeaponAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_SheathingWeaponAnim = { "SheathingWeaponAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, SheathingWeaponAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheathingWeaponAnim_MetaData), NewProp_SheathingWeaponAnim_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_CombatAttachSocket = { "CombatAttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, CombatAttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAttachSocket_MetaData), NewProp_CombatAttachSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_CarryAttachSocket = { "CarryAttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, CarryAttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryAttachSocket_MetaData), NewProp_CarryAttachSocket_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_damageDice = { "damageDice", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, damageDice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageDice_MetaData), NewProp_damageDice_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_numberOfDices = { "numberOfDices", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, numberOfDices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numberOfDices_MetaData), NewProp_numberOfDices_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponType), Z_Construct_UEnum_TurnBasedPrototype_WeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponType_MetaData), NewProp_weaponType_MetaData) }; // 292857346
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_damageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, damageType), Z_Construct_UEnum_TurnBasedPrototype_WeaponDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageType_MetaData), NewProp_damageType_MetaData) }; // 3875108605
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponRange = { "weaponRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponRange_MetaData), NewProp_weaponRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponName = { "weaponName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponName_MetaData), NewProp_weaponName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponDescription = { "weaponDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponDescription_MetaData), NewProp_weaponDescription_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, rarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rarity_MetaData), NewProp_rarity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_MaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_WeaponIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAnims_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAnims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_equipWeaponAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_SheathingWeaponAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_CombatAttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_CarryAttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_damageDice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_numberOfDices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_damageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_damageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_rarity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponDataAsset_Statics::ClassParams = {
	&UWeaponDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponDataAsset()
{
	if (!Z_Registration_Info_UClass_UWeaponDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponDataAsset.OuterSingleton, Z_Construct_UClass_UWeaponDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponDataAsset.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UWeaponDataAsset>()
{
	return UWeaponDataAsset::StaticClass();
}
UWeaponDataAsset::UWeaponDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponDataAsset);
UWeaponDataAsset::~UWeaponDataAsset() {}
// End Class UWeaponDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ WeaponType_StaticEnum, TEXT("WeaponType"), &Z_Registration_Info_UEnum_WeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 292857346U) },
		{ WeaponDamageType_StaticEnum, TEXT("WeaponDamageType"), &Z_Registration_Info_UEnum_WeaponDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3875108605U) },
		{ AttackType_StaticEnum, TEXT("AttackType"), &Z_Registration_Info_UEnum_AttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 456875713U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponAnim::StaticStruct, Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewStructOps, TEXT("WeaponAnim"), &Z_Registration_Info_UScriptStruct_WeaponAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponAnim), 4110656983U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponDataAsset, UWeaponDataAsset::StaticClass, TEXT("UWeaponDataAsset"), &Z_Registration_Info_UClass_UWeaponDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponDataAsset), 1313662850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_3573149941(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
