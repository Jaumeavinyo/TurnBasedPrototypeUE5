// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/NPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCharacter() {}

// Begin Cross Module References
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacter();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ANPCharacter();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ANPCharacter_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UNPCDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class ANPCharacter
void ANPCharacter::StaticRegisterNativesANPCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCharacter);
UClass* Z_Construct_UClass_ANPCharacter_NoRegister()
{
	return ANPCharacter::StaticClass();
}
struct Z_Construct_UClass_ANPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPCharacter.h" },
		{ "ModuleRelativePath", "Public/NPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPC_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/NPCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCharacter_Statics::NewProp_NPC_Data = { "NPC_Data", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCharacter, NPC_Data), Z_Construct_UClass_UNPCDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPC_Data_MetaData), NewProp_NPC_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCharacter_Statics::NewProp_NPC_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANPCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ANPCharacter, IInteractable), false },  // 1148941949
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCharacter_Statics::ClassParams = {
	&ANPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANPCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCharacter()
{
	if (!Z_Registration_Info_UClass_ANPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCharacter.OuterSingleton, Z_Construct_UClass_ANPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCharacter.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<ANPCharacter>()
{
	return ANPCharacter::StaticClass();
}
ANPCharacter::ANPCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCharacter);
ANPCharacter::~ANPCharacter() {}
// End Class ANPCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCharacter, ANPCharacter::StaticClass, TEXT("ANPCharacter"), &Z_Registration_Info_UClass_ANPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCharacter), 2295514815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCharacter_h_3899350637(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_NPCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
