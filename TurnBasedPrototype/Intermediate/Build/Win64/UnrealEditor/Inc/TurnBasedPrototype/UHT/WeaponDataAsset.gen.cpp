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
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UAttackDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_AttackType();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_WeaponType();
TURNBASEDPROTOTYPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Enum WeaponAttackType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_WeaponAttackType;
static UEnum* WeaponAttackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_WeaponAttackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_WeaponAttackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("WeaponAttackType"));
	}
	return Z_Registration_Info_UEnum_WeaponAttackType.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<WeaponAttackType>()
{
	return WeaponAttackType_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WEAPON INFO\n" },
#endif
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "WeaponAttackType::Melee" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "WeaponAttackType::Ranged" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPON INFO" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WeaponAttackType::Melee", (int64)WeaponAttackType::Melee },
		{ "WeaponAttackType::Ranged", (int64)WeaponAttackType::Ranged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"WeaponAttackType",
	"WeaponAttackType",
	Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType()
{
	if (!Z_Registration_Info_UEnum_WeaponAttackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_WeaponAttackType.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_WeaponAttackType.InnerSingleton;
}
// End Enum WeaponAttackType

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
		{ "Dagger.DisplayName", "Dagger" },
		{ "Dagger.Name", "WeaponType::Dagger" },
		{ "GreatSword.DisplayName", "GreatSword" },
		{ "GreatSword.Name", "WeaponType::GreatSword" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
		{ "Stick.DisplayName", "Stick" },
		{ "Stick.Name", "WeaponType::Stick" },
		{ "Sword.DisplayName", "Sword" },
		{ "Sword.Name", "WeaponType::Sword" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WeaponType::GreatSword", (int64)WeaponType::GreatSword },
		{ "WeaponType::Sword", (int64)WeaponType::Sword },
		{ "WeaponType::Dagger", (int64)WeaponType::Dagger },
		{ "WeaponType::Stick", (int64)WeaponType::Stick },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "type" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_animMontage_MetaData[] = {
		{ "Category", "anim" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_animMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAnim>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnim, Type), Z_Construct_UEnum_TurnBasedPrototype_AttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4006511375
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_animMontage = { "animMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnim, animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_animMontage_MetaData), NewProp_animMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_Type,
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttacks_MetaData[] = {
		{ "Category", "Attacks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Weapon attacks\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon attacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawWeaponAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheathingWeaponAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponDrawedSocket_MetaData[] = {
		{ "Category", "Socket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//this is to know the default positions for this weapon: for a greatsword could be rhand and onback\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this is to know the default positions for this weapon: for a greatsword could be rhand and onback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponSheathedSocket_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRHandAttachSocket_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBackAttachSocket_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponAttackType_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/WeaponDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAttacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponAttacks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawWeaponAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SheathingWeaponAnim;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultWeaponDrawedSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultWeaponSheathedSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnRHandAttachSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnBackAttachSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_weaponAttackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_weaponAttackType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_weaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_weaponType;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAnims_Inner = { "weaponAnims", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(0, nullptr) }; // 471547635
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAnims = { "weaponAnims", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponAnims), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponAnims_MetaData), NewProp_weaponAnims_MetaData) }; // 471547635
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_WeaponAttacks_Inner = { "WeaponAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttackDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_WeaponAttacks = { "WeaponAttacks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, WeaponAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAttacks_MetaData), NewProp_WeaponAttacks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_DrawWeaponAnim = { "DrawWeaponAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, DrawWeaponAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawWeaponAnim_MetaData), NewProp_DrawWeaponAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_SheathingWeaponAnim = { "SheathingWeaponAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, SheathingWeaponAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheathingWeaponAnim_MetaData), NewProp_SheathingWeaponAnim_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_DefaultWeaponDrawedSocket = { "DefaultWeaponDrawedSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, DefaultWeaponDrawedSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponDrawedSocket_MetaData), NewProp_DefaultWeaponDrawedSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_DefaultWeaponSheathedSocket = { "DefaultWeaponSheathedSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, DefaultWeaponSheathedSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponSheathedSocket_MetaData), NewProp_DefaultWeaponSheathedSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_OnRHandAttachSocket = { "OnRHandAttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, OnRHandAttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRHandAttachSocket_MetaData), NewProp_OnRHandAttachSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_OnBackAttachSocket = { "OnBackAttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, OnBackAttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBackAttachSocket_MetaData), NewProp_OnBackAttachSocket_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAttackType = { "weaponAttackType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponAttackType), Z_Construct_UEnum_TurnBasedPrototype_WeaponAttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponAttackType_MetaData), NewProp_weaponAttackType_MetaData) }; // 279078405
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDataAsset, weaponType), Z_Construct_UEnum_TurnBasedPrototype_WeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponType_MetaData), NewProp_weaponType_MetaData) }; // 1369781356
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_WeaponAttacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_WeaponAttacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_DrawWeaponAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_SheathingWeaponAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_DefaultWeaponDrawedSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_DefaultWeaponSheathedSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_OnRHandAttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_OnBackAttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAttackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponAttackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDataAsset_Statics::NewProp_weaponType,
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
		{ WeaponAttackType_StaticEnum, TEXT("WeaponAttackType"), &Z_Registration_Info_UEnum_WeaponAttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 279078405U) },
		{ WeaponType_StaticEnum, TEXT("WeaponType"), &Z_Registration_Info_UEnum_WeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1369781356U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponAnim::StaticStruct, Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewStructOps, TEXT("WeaponAnim"), &Z_Registration_Info_UScriptStruct_WeaponAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponAnim), 471547635U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponDataAsset, UWeaponDataAsset::StaticClass, TEXT("UWeaponDataAsset"), &Z_Registration_Info_UClass_UWeaponDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponDataAsset), 1447465633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_1009026552(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponDataAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
