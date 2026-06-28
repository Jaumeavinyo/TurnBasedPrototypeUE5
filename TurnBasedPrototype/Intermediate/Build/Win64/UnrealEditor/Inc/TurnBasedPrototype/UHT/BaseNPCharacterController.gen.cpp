// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/BaseNPCharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseNPCharacterController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseNPCharacterController();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseNPCharacterController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class ABaseNPCharacterController
void ABaseNPCharacterController::StaticRegisterNativesABaseNPCharacterController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseNPCharacterController);
UClass* Z_Construct_UClass_ABaseNPCharacterController_NoRegister()
{
	return ABaseNPCharacterController::StaticClass();
}
struct Z_Construct_UClass_ABaseNPCharacterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseNPCharacterController.h" },
		{ "ModuleRelativePath", "Public/BaseNPCharacterController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseNPCharacterController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseNPCharacterController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPCharacterController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseNPCharacterController_Statics::ClassParams = {
	&ABaseNPCharacterController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPCharacterController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseNPCharacterController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseNPCharacterController()
{
	if (!Z_Registration_Info_UClass_ABaseNPCharacterController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseNPCharacterController.OuterSingleton, Z_Construct_UClass_ABaseNPCharacterController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseNPCharacterController.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<ABaseNPCharacterController>()
{
	return ABaseNPCharacterController::StaticClass();
}
ABaseNPCharacterController::ABaseNPCharacterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseNPCharacterController);
ABaseNPCharacterController::~ABaseNPCharacterController() {}
// End Class ABaseNPCharacterController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseNPCharacterController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseNPCharacterController, ABaseNPCharacterController::StaticClass, TEXT("ABaseNPCharacterController"), &Z_Registration_Info_UClass_ABaseNPCharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseNPCharacterController), 3640882523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseNPCharacterController_h_398208144(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseNPCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseNPCharacterController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
