// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/GameManager/GameManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UGameManager();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UGameManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UGameManager
void UGameManager::StaticRegisterNativesUGameManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameManager);
UClass* Z_Construct_UClass_UGameManager_NoRegister()
{
	return UGameManager::StaticClass();
}
struct Z_Construct_UClass_UGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameManager/GameManager.h" },
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of actors that are currently performing actions in OnInitialize() || PerformAction() || FinishAction() FinishAction should remove them from this list\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actors that are currently performing actions in OnInitialize() || PerformAction() || FinishAction() FinishAction should remove them from this list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlledActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledActors_Inner = { "ControlledActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledActors = { "ControlledActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameManager, ControlledActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledActors_MetaData), NewProp_ControlledActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameManager_Statics::ClassParams = {
	&UGameManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameManager()
{
	if (!Z_Registration_Info_UClass_UGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameManager.OuterSingleton, Z_Construct_UClass_UGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameManager.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UGameManager>()
{
	return UGameManager::StaticClass();
}
UGameManager::UGameManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManager);
UGameManager::~UGameManager() {}
// End Class UGameManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameManager, UGameManager::StaticClass, TEXT("UGameManager"), &Z_Registration_Info_UClass_UGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameManager), 2508500774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_264429645(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
