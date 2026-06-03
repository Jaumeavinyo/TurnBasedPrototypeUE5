// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/GameManager/PuppetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuppetComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UPuppetComponent();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UPuppetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UPuppetComponent
void UPuppetComponent::StaticRegisterNativesUPuppetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuppetComponent);
UClass* Z_Construct_UClass_UPuppetComponent_NoRegister()
{
	return UPuppetComponent::StaticClass();
}
struct Z_Construct_UClass_UPuppetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameManager/PuppetComponent.h" },
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuppetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPuppetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuppetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuppetComponent_Statics::ClassParams = {
	&UPuppetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuppetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPuppetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPuppetComponent()
{
	if (!Z_Registration_Info_UClass_UPuppetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPuppetComponent.OuterSingleton, Z_Construct_UClass_UPuppetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPuppetComponent.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UPuppetComponent>()
{
	return UPuppetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPuppetComponent);
UPuppetComponent::~UPuppetComponent() {}
// End Class UPuppetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_PuppetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPuppetComponent, UPuppetComponent::StaticClass, TEXT("UPuppetComponent"), &Z_Registration_Info_UClass_UPuppetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuppetComponent), 1381176175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_PuppetComponent_h_434759745(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_PuppetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_PuppetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
