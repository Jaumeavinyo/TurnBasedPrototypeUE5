// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/GameManager/BaseAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UBaseAction();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UBaseAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UBaseAction
void UBaseAction::StaticRegisterNativesUBaseAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAction);
UClass* Z_Construct_UClass_UBaseAction_NoRegister()
{
	return UBaseAction::StaticClass();
}
struct Z_Construct_UClass_UBaseAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameManager/BaseAction.h" },
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionFinished_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//called from game manager\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called from game manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPerformer_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ActionFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActionFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionPerformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionFinished_SetBit(void* Obj)
{
	((UBaseAction*)Obj)->ActionFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionFinished = { "ActionFinished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseAction), &Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionFinished_MetaData), NewProp_ActionFinished_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionPerformer = { "ActionPerformer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAction, ActionPerformer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPerformer_MetaData), NewProp_ActionPerformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionPerformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAction_Statics::ClassParams = {
	&UBaseAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAction()
{
	if (!Z_Registration_Info_UClass_UBaseAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAction.OuterSingleton, Z_Construct_UClass_UBaseAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAction.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UBaseAction>()
{
	return UBaseAction::StaticClass();
}
UBaseAction::UBaseAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAction);
UBaseAction::~UBaseAction() {}
// End Class UBaseAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAction, UBaseAction::StaticClass, TEXT("UBaseAction"), &Z_Registration_Info_UClass_UBaseAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAction), 1845843955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_1772901271(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
