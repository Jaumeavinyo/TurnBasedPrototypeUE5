// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/UIManager.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UUIManager();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UUIManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UUIManager
void UUIManager::StaticRegisterNativesUUIManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIManager);
UClass* Z_Construct_UClass_UUIManager_NoRegister()
{
	return UUIManager::StaticClass();
}
struct Z_Construct_UClass_UUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  MyPlayerSubsystem* MySubsystem = LocalPlayer->GetSubsystem<UMyPlayerSubsystem>();\n */" },
#endif
		{ "IncludePath", "UIManager.h" },
		{ "ModuleRelativePath", "Public/UIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MyPlayerSubsystem* MySubsystem = LocalPlayer->GetSubsystem<UMyPlayerSubsystem>();" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIManager_Statics::ClassParams = {
	&UUIManager::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIManager()
{
	if (!Z_Registration_Info_UClass_UUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIManager.OuterSingleton, Z_Construct_UClass_UUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIManager.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UUIManager>()
{
	return UUIManager::StaticClass();
}
UUIManager::UUIManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIManager);
UUIManager::~UUIManager() {}
// End Class UUIManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UIManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIManager, UUIManager::StaticClass, TEXT("UUIManager"), &Z_Registration_Info_UClass_UUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIManager), 435169576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UIManager_h_4212622568(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UIManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
