// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/DoorDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UDoorDataAsset();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UDoorDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UDoorDataAsset
void UDoorDataAsset::StaticRegisterNativesUDoorDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorDataAsset);
UClass* Z_Construct_UClass_UDoorDataAsset_NoRegister()
{
	return UDoorDataAsset::StaticClass();
}
struct Z_Construct_UClass_UDoorDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DoorDataAsset.h" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainInteraction_MetaData[] = {
		{ "Category", "Interactions" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interactions_MetaData[] = {
		{ "Category", "Interactions" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpenClockwise_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/DoorDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_mainInteraction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mainInteraction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_interactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_interactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_interactions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static void NewProp_bOpenClockwise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenClockwise;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorDataAsset, DoorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_mainInteraction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_mainInteraction = { "mainInteraction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorDataAsset, mainInteraction), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainInteraction_MetaData), NewProp_mainInteraction_MetaData) }; // 821326794
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_interactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_interactions_Inner = { "interactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 821326794
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_interactions = { "interactions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorDataAsset, interactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interactions_MetaData), NewProp_interactions_MetaData) }; // 821326794
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorDataAsset, OpenAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAngle_MetaData), NewProp_OpenAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorDataAsset, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
void Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_bOpenClockwise_SetBit(void* Obj)
{
	((UDoorDataAsset*)Obj)->bOpenClockwise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_bOpenClockwise = { "bOpenClockwise", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDoorDataAsset), &Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_bOpenClockwise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpenClockwise_MetaData), NewProp_bOpenClockwise_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorDataAsset, RotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCurve_MetaData), NewProp_RotationCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_mainInteraction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_mainInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_interactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_interactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_interactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_OpenAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_bOpenClockwise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorDataAsset_Statics::NewProp_RotationCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDoorDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorDataAsset_Statics::ClassParams = {
	&UDoorDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDoorDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDoorDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDoorDataAsset()
{
	if (!Z_Registration_Info_UClass_UDoorDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorDataAsset.OuterSingleton, Z_Construct_UClass_UDoorDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoorDataAsset.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UDoorDataAsset>()
{
	return UDoorDataAsset::StaticClass();
}
UDoorDataAsset::UDoorDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorDataAsset);
UDoorDataAsset::~UDoorDataAsset() {}
// End Class UDoorDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_DoorDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoorDataAsset, UDoorDataAsset::StaticClass, TEXT("UDoorDataAsset"), &Z_Registration_Info_UClass_UDoorDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorDataAsset), 1042647302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_DoorDataAsset_h_408015114(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_DoorDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_DoorDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
