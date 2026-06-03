// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/GameManager/ActionOpenChest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionOpenChest() {}

// Begin Cross Module References
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UActionOpenChest();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UActionOpenChest_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UBaseAction();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UActionOpenChest Function FinishAction
struct Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics
{
	struct ActionOpenChest_eventFinishAction_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//called from game manager\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called from game manager" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActionOpenChest_eventFinishAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActionOpenChest_eventFinishAction_Parms), &Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "FinishAction", nullptr, nullptr, Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::ActionOpenChest_eventFinishAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::ActionOpenChest_eventFinishAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionOpenChest_FinishAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionOpenChest::execFinishAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FinishAction();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function FinishAction

// Begin Class UActionOpenChest Function OnInitialize
struct Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics
{
	struct ActionOpenChest_eventOnInitialize_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActionOpenChest_eventOnInitialize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActionOpenChest_eventOnInitialize_Parms), &Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "OnInitialize", nullptr, nullptr, Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::ActionOpenChest_eventOnInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::ActionOpenChest_eventOnInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionOpenChest_OnInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionOpenChest::execOnInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnInitialize();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function OnInitialize

// Begin Class UActionOpenChest Function PerformAction
struct Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics
{
	struct ActionOpenChest_eventPerformAction_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//overrided by programmer but called from InitializeAction\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "overrided by programmer but called from InitializeAction" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActionOpenChest_eventPerformAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActionOpenChest_eventPerformAction_Parms), &Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "PerformAction", nullptr, nullptr, Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::ActionOpenChest_eventPerformAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::ActionOpenChest_eventPerformAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionOpenChest_PerformAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionOpenChest::execPerformAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PerformAction();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function PerformAction

// Begin Class UActionOpenChest
void UActionOpenChest::StaticRegisterNativesUActionOpenChest()
{
	UClass* Class = UActionOpenChest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishAction", &UActionOpenChest::execFinishAction },
		{ "OnInitialize", &UActionOpenChest::execOnInitialize },
		{ "PerformAction", &UActionOpenChest::execPerformAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionOpenChest);
UClass* Z_Construct_UClass_UActionOpenChest_NoRegister()
{
	return UActionOpenChest::StaticClass();
}
struct Z_Construct_UClass_UActionOpenChest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameManager/ActionOpenChest.h" },
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionOpenChest_FinishAction, "FinishAction" }, // 2208143234
		{ &Z_Construct_UFunction_UActionOpenChest_OnInitialize, "OnInitialize" }, // 1786210696
		{ &Z_Construct_UFunction_UActionOpenChest_PerformAction, "PerformAction" }, // 4107068457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionOpenChest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActionOpenChest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAction,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionOpenChest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionOpenChest_Statics::ClassParams = {
	&UActionOpenChest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionOpenChest_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionOpenChest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionOpenChest()
{
	if (!Z_Registration_Info_UClass_UActionOpenChest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionOpenChest.OuterSingleton, Z_Construct_UClass_UActionOpenChest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionOpenChest.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UActionOpenChest>()
{
	return UActionOpenChest::StaticClass();
}
UActionOpenChest::UActionOpenChest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionOpenChest);
UActionOpenChest::~UActionOpenChest() {}
// End Class UActionOpenChest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_ActionOpenChest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionOpenChest, UActionOpenChest::StaticClass, TEXT("UActionOpenChest"), &Z_Registration_Info_UClass_UActionOpenChest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionOpenChest), 926297322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_ActionOpenChest_h_3170804100(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_ActionOpenChest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_ActionOpenChest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
