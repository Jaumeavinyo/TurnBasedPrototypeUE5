// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/AttackDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UAttackDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UAttackDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_AttackType();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

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
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
		{ "Special.Comment", "//special attack for a weapon\n" },
		{ "Special.DisplayName", "Special" },
		{ "Special.Name", "AttackType::Special" },
		{ "Special.ToolTip", "special attack for a weapon" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPON ANIMS" },
#endif
		{ "WeaponHeavy.Comment", "//default attack for a weapon\n" },
		{ "WeaponHeavy.DisplayName", "Heavy" },
		{ "WeaponHeavy.Name", "AttackType::WeaponHeavy" },
		{ "WeaponHeavy.ToolTip", "default attack for a weapon" },
		{ "WeaponLight.DisplayName", "Light" },
		{ "WeaponLight.Name", "AttackType::WeaponLight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AttackType::WeaponLight", (int64)AttackType::WeaponLight },
		{ "AttackType::WeaponHeavy", (int64)AttackType::WeaponHeavy },
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

// Begin Enum AttackDamageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AttackDamageType;
static UEnum* AttackDamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AttackDamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AttackDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("AttackDamageType"));
	}
	return Z_Registration_Info_UEnum_AttackDamageType.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<AttackDamageType>()
{
	return AttackDamageType_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Magical.DisplayName", "Magic" },
		{ "Magical.Name", "AttackDamageType::Magical" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
		{ "Physical.DisplayName", "Physical" },
		{ "Physical.Name", "AttackDamageType::Physical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AttackDamageType::Physical", (int64)AttackDamageType::Physical },
		{ "AttackDamageType::Magical", (int64)AttackDamageType::Magical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"AttackDamageType",
	"AttackDamageType",
	Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType()
{
	if (!Z_Registration_Info_UEnum_AttackDamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AttackDamageType.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AttackDamageType.InnerSingleton;
}
// End Enum AttackDamageType

// Begin Class UAttackDataAsset
void UAttackDataAsset::StaticRegisterNativesUAttackDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackDataAsset);
UClass* Z_Construct_UClass_UAttackDataAsset_NoRegister()
{
	return UAttackDataAsset::StaticClass();
}
struct Z_Construct_UClass_UAttackDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AttackDataAsset.h" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttatchToWeapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageDice_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numberOfDices_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamageType_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//VFX not added yet\n" },
#endif
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VFX not added yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//if 0, use weaponRange\n" },
#endif
		{ "ModuleRelativePath", "Public/AttackDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if 0, use weaponRange" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static void NewProp_bIsAttatchToWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttatchToWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_damageDice;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfDices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnim;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackDamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackDamageType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataAsset, id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_id_MetaData), NewProp_id_MetaData) };
void Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_bIsAttatchToWeapon_SetBit(void* Obj)
{
	((UAttackDataAsset*)Obj)->bIsAttatchToWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_bIsAttatchToWeapon = { "bIsAttatchToWeapon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAttackDataAsset), &Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_bIsAttatchToWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttatchToWeapon_MetaData), NewProp_bIsAttatchToWeapon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_damageDice = { "damageDice", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataAsset, damageDice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageDice_MetaData), NewProp_damageDice_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_numberOfDices = { "numberOfDices", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataAsset, numberOfDices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numberOfDices_MetaData), NewProp_numberOfDices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataAsset, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnim_MetaData), NewProp_AttackAnim_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackDamageType = { "AttackDamageType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataAsset, AttackDamageType), Z_Construct_UEnum_TurnBasedPrototype_AttackDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamageType_MetaData), NewProp_AttackDamageType_MetaData) }; // 2091189760
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataAsset, Type), Z_Construct_UEnum_TurnBasedPrototype_AttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4006511375
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataAsset, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_bIsAttatchToWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_damageDice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_numberOfDices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackDamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackDamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataAsset_Statics::NewProp_AttackRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttackDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackDataAsset_Statics::ClassParams = {
	&UAttackDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttackDataAsset()
{
	if (!Z_Registration_Info_UClass_UAttackDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackDataAsset.OuterSingleton, Z_Construct_UClass_UAttackDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackDataAsset.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UAttackDataAsset>()
{
	return UAttackDataAsset::StaticClass();
}
UAttackDataAsset::UAttackDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackDataAsset);
UAttackDataAsset::~UAttackDataAsset() {}
// End Class UAttackDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AttackType_StaticEnum, TEXT("AttackType"), &Z_Registration_Info_UEnum_AttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4006511375U) },
		{ AttackDamageType_StaticEnum, TEXT("AttackDamageType"), &Z_Registration_Info_UEnum_AttackDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2091189760U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackDataAsset, UAttackDataAsset::StaticClass, TEXT("UAttackDataAsset"), &Z_Registration_Info_UClass_UAttackDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackDataAsset), 1637671153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_845691838(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_AttackDataAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
