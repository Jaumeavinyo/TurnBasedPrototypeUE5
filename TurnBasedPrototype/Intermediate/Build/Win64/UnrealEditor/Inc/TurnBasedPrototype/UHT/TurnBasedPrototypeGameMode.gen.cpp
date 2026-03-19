// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/TurnBasedPrototypeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedPrototypeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ATurnBasedPrototypeGameMode();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ATurnBasedPrototypeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class ATurnBasedPrototypeGameMode
void ATurnBasedPrototypeGameMode::StaticRegisterNativesATurnBasedPrototypeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurnBasedPrototypeGameMode);
UClass* Z_Construct_UClass_ATurnBasedPrototypeGameMode_NoRegister()
{
	return ATurnBasedPrototypeGameMode::StaticClass();
}
struct Z_Construct_UClass_ATurnBasedPrototypeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TurnBasedPrototypeGameMode.h" },
		{ "ModuleRelativePath", "TurnBasedPrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedPrototypeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATurnBasedPrototypeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedPrototypeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnBasedPrototypeGameMode_Statics::ClassParams = {
	&ATurnBasedPrototypeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedPrototypeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurnBasedPrototypeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurnBasedPrototypeGameMode()
{
	if (!Z_Registration_Info_UClass_ATurnBasedPrototypeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurnBasedPrototypeGameMode.OuterSingleton, Z_Construct_UClass_ATurnBasedPrototypeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurnBasedPrototypeGameMode.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<ATurnBasedPrototypeGameMode>()
{
	return ATurnBasedPrototypeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnBasedPrototypeGameMode);
ATurnBasedPrototypeGameMode::~ATurnBasedPrototypeGameMode() {}
// End Class ATurnBasedPrototypeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurnBasedPrototypeGameMode, ATurnBasedPrototypeGameMode::StaticClass, TEXT("ATurnBasedPrototypeGameMode"), &Z_Registration_Info_UClass_ATurnBasedPrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnBasedPrototypeGameMode), 3718143375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypeGameMode_h_2625299595(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
