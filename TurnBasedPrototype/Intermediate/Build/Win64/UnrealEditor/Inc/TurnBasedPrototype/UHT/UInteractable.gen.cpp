// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/UInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUInteractable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractable();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Enum EInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractionType;
static UEnum* EInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("EInteractionType"));
	}
	return Z_Registration_Info_UEnum_EInteractionType.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<EInteractionType>()
{
	return EInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_EInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.Name", "EInteractionType::Attack" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Grab.Comment", "/**\n * \n */" },
		{ "Grab.Name", "EInteractionType::Grab" },
		{ "Inspect.Comment", "/**\n * \n */" },
		{ "Inspect.Name", "EInteractionType::Inspect" },
		{ "ModuleRelativePath", "Public/UInteractable.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.Name", "EInteractionType::None" },
		{ "Open.Comment", "/**\n * \n */" },
		{ "Open.Name", "EInteractionType::Open" },
		{ "Talk.Comment", "/**\n * \n */" },
		{ "Talk.Name", "EInteractionType::Talk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInteractionType::None", (int64)EInteractionType::None },
		{ "EInteractionType::Attack", (int64)EInteractionType::Attack },
		{ "EInteractionType::Talk", (int64)EInteractionType::Talk },
		{ "EInteractionType::Inspect", (int64)EInteractionType::Inspect },
		{ "EInteractionType::Grab", (int64)EInteractionType::Grab },
		{ "EInteractionType::Open", (int64)EInteractionType::Open },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_EInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"EInteractionType",
	"EInteractionType",
	Z_Construct_UEnum_TurnBasedPrototype_EInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_EInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_EInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType()
{
	if (!Z_Registration_Info_UEnum_EInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractionType.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInteractionType.InnerSingleton;
}
// End Enum EInteractionType

// Begin Interface UInteractable
void UInteractable::StaticRegisterNativesUInteractable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
UClass* Z_Construct_UClass_UInteractable_NoRegister()
{
	return UInteractable::StaticClass();
}
struct Z_Construct_UClass_UInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UInteractable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
	&UInteractable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractable()
{
	if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UInteractable>()
{
	return UInteractable::StaticClass();
}
UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
UInteractable::~UInteractable() {}
// End Interface UInteractable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UInteractable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInteractionType_StaticEnum, TEXT("EInteractionType"), &Z_Registration_Info_UEnum_EInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1346780968U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 1148941949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UInteractable_h_2963029043(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UInteractable_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UInteractable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UInteractable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
