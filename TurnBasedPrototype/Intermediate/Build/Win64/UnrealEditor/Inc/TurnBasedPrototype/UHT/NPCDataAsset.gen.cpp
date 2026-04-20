// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/NPCDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UNPCDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UNPCDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_NPCState();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Enum NPCState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_NPCState;
static UEnum* NPCState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_NPCState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_NPCState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_NPCState, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("NPCState"));
	}
	return Z_Registration_Info_UEnum_NPCState.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<NPCState>()
{
	return NPCState_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_NPCState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Agressive.DisplayName", "Agressive" },
		{ "Agressive.Name", "NPCState::Agressive" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NPCDataAsset.h" },
		{ "Pasive.DisplayName", "Pasive" },
		{ "Pasive.Name", "NPCState::Pasive" },
		{ "Special.DisplayName", "Special" },
		{ "Special.Name", "NPCState::Special" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NPCState::Pasive", (int64)NPCState::Pasive },
		{ "NPCState::Agressive", (int64)NPCState::Agressive },
		{ "NPCState::Special", (int64)NPCState::Special },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_NPCState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"NPCState",
	"NPCState",
	Z_Construct_UEnum_TurnBasedPrototype_NPCState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_NPCState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_NPCState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_NPCState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_NPCState()
{
	if (!Z_Registration_Info_UEnum_NPCState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_NPCState.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_NPCState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_NPCState.InnerSingleton;
}
// End Enum NPCState

// Begin Class UNPCDataAsset
void UNPCDataAsset::StaticRegisterNativesUNPCDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCDataAsset);
UClass* Z_Construct_UClass_UNPCDataAsset_NoRegister()
{
	return UNPCDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNPCDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPCDataAsset.h" },
		{ "ModuleRelativePath", "Public/NPCDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interactions_MetaData[] = {
		{ "Category", "Interactions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of interaction types\n" },
#endif
		{ "ModuleRelativePath", "Public/NPCDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of interaction types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_initialNPCState_MetaData[] = {
		{ "Category", "state" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Initial NPC state (Agressive, pacific...)\n" },
#endif
		{ "ModuleRelativePath", "Public/NPCDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial NPC state (Agressive, pacific...)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentNPCState_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/NPCDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCName_MetaData[] = {
		{ "Category", "Name" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//name\n" },
#endif
		{ "ModuleRelativePath", "Public/NPCDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_interactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_interactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_interactions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_initialNPCState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_initialNPCState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentNPCState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentNPCState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_interactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_interactions_Inner = { "interactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_interactions = { "interactions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDataAsset, interactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interactions_MetaData), NewProp_interactions_MetaData) }; // 1346780968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_initialNPCState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_initialNPCState = { "initialNPCState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDataAsset, initialNPCState), Z_Construct_UEnum_TurnBasedPrototype_NPCState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_initialNPCState_MetaData), NewProp_initialNPCState_MetaData) }; // 3943753010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_currentNPCState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_currentNPCState = { "currentNPCState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDataAsset, currentNPCState), Z_Construct_UEnum_TurnBasedPrototype_NPCState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentNPCState_MetaData), NewProp_currentNPCState_MetaData) }; // 3943753010
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_NPCName = { "NPCName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDataAsset, NPCName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCName_MetaData), NewProp_NPCName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_interactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_interactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_interactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_initialNPCState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_initialNPCState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_currentNPCState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_currentNPCState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDataAsset_Statics::NewProp_NPCName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCDataAsset_Statics::ClassParams = {
	&UNPCDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPCDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCDataAsset()
{
	if (!Z_Registration_Info_UClass_UNPCDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCDataAsset.OuterSingleton, Z_Construct_UClass_UNPCDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCDataAsset.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UNPCDataAsset>()
{
	return UNPCDataAsset::StaticClass();
}
UNPCDataAsset::UNPCDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCDataAsset);
UNPCDataAsset::~UNPCDataAsset() {}
// End Class UNPCDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ NPCState_StaticEnum, TEXT("NPCState"), &Z_Registration_Info_UEnum_NPCState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3943753010U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCDataAsset, UNPCDataAsset::StaticClass, TEXT("UNPCDataAsset"), &Z_Registration_Info_UClass_UNPCDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCDataAsset), 1194937892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_2344899679(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCDataAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
