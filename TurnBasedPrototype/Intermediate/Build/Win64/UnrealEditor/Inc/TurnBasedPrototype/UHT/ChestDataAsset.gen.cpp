// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/ChestDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChestDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UChestDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UChestDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UChestDataAsset
void UChestDataAsset::StaticRegisterNativesUChestDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChestDataAsset);
UClass* Z_Construct_UClass_UChestDataAsset_NoRegister()
{
	return UChestDataAsset::StaticClass();
}
struct Z_Construct_UClass_UChestDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ChestDataAsset.h" },
		{ "ModuleRelativePath", "Public/ChestDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "ChestMesh" },
		{ "ModuleRelativePath", "Public/ChestDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UMaterial interface is parent to all material type clases, this allows to use UMaterial, UMaterialInstance, UMaterialInstanceDinamic\n" },
#endif
		{ "ModuleRelativePath", "Public/ChestDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMaterial interface is parent to all material type clases, this allows to use UMaterial, UMaterialInstance, UMaterialInstanceDinamic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainInteraction_MetaData[] = {
		{ "Category", "Interactions" },
		{ "ModuleRelativePath", "Public/ChestDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interactions_MetaData[] = {
		{ "Category", "Interactions" },
		{ "ModuleRelativePath", "Public/ChestDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenChestAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ChestDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseChestAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ChestDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_mainInteraction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mainInteraction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_interactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_interactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_interactions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenChestAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseChestAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChestDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChestDataAsset, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChestDataAsset, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_mainInteraction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_mainInteraction = { "mainInteraction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChestDataAsset, mainInteraction), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainInteraction_MetaData), NewProp_mainInteraction_MetaData) }; // 821326794
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_interactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_interactions_Inner = { "interactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 821326794
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_interactions = { "interactions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChestDataAsset, interactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interactions_MetaData), NewProp_interactions_MetaData) }; // 821326794
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_OpenChestAnim = { "OpenChestAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChestDataAsset, OpenChestAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenChestAnim_MetaData), NewProp_OpenChestAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestDataAsset_Statics::NewProp_CloseChestAnim = { "CloseChestAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChestDataAsset, CloseChestAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseChestAnim_MetaData), NewProp_CloseChestAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChestDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_MaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_mainInteraction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_mainInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_interactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_interactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_interactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_OpenChestAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestDataAsset_Statics::NewProp_CloseChestAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChestDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChestDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChestDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChestDataAsset_Statics::ClassParams = {
	&UChestDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChestDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChestDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChestDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UChestDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChestDataAsset()
{
	if (!Z_Registration_Info_UClass_UChestDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChestDataAsset.OuterSingleton, Z_Construct_UClass_UChestDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChestDataAsset.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UChestDataAsset>()
{
	return UChestDataAsset::StaticClass();
}
UChestDataAsset::UChestDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChestDataAsset);
UChestDataAsset::~UChestDataAsset() {}
// End Class UChestDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ChestDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChestDataAsset, UChestDataAsset::StaticClass, TEXT("UChestDataAsset"), &Z_Registration_Info_UClass_UChestDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChestDataAsset), 917470811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ChestDataAsset_h_2425629141(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ChestDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ChestDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
