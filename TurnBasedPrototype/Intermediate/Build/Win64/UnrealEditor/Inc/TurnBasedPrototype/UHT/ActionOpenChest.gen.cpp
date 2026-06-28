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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UActionOpenChest();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UActionOpenChest_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UBaseAction();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UActionOpenChest Function FindClosestPoint
struct Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics
{
	struct ActionOpenChest_eventFindClosestPoint_Parms
	{
		FVector ReturnValue;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionOpenChest_eventFindClosestPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "FindClosestPoint", nullptr, nullptr, Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::ActionOpenChest_eventFindClosestPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::ActionOpenChest_eventFindClosestPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionOpenChest_FindClosestPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionOpenChest_FindClosestPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionOpenChest::execFindClosestPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->FindClosestPoint();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function FindClosestPoint

// Begin Class UActionOpenChest Function FinishAction
struct Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics
{
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "FinishAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_FinishAction_Statics::Function_MetaDataParams) };
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
	P_THIS->FinishAction();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function FinishAction

// Begin Class UActionOpenChest Function GetControllerFromPerformer
struct Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics
{
	struct ActionOpenChest_eventGetControllerFromPerformer_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionOpenChest_eventGetControllerFromPerformer_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "GetControllerFromPerformer", nullptr, nullptr, Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::ActionOpenChest_eventGetControllerFromPerformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::ActionOpenChest_eventGetControllerFromPerformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionOpenChest::execGetControllerFromPerformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetControllerFromPerformer();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function GetControllerFromPerformer

// Begin Class UActionOpenChest Function OnInitialize
struct Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "OnInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_OnInitialize_Statics::Function_MetaDataParams) };
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
	P_THIS->OnInitialize();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function OnInitialize

// Begin Class UActionOpenChest Function PerformAction
struct Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics
{
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionOpenChest, nullptr, "PerformAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionOpenChest_PerformAction_Statics::Function_MetaDataParams) };
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
	P_THIS->PerformAction();
	P_NATIVE_END;
}
// End Class UActionOpenChest Function PerformAction

// Begin Class UActionOpenChest
void UActionOpenChest::StaticRegisterNativesUActionOpenChest()
{
	UClass* Class = UActionOpenChest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindClosestPoint", &UActionOpenChest::execFindClosestPoint },
		{ "FinishAction", &UActionOpenChest::execFinishAction },
		{ "GetControllerFromPerformer", &UActionOpenChest::execGetControllerFromPerformer },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenChestPathPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReachedDestination_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/ActionOpenChest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpenChestPathPoint;
	static void NewProp_bHasReachedDestination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReachedDestination;
	static void NewProp_IsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionOpenChest_FindClosestPoint, "FindClosestPoint" }, // 3173376298
		{ &Z_Construct_UFunction_UActionOpenChest_FinishAction, "FinishAction" }, // 3074522477
		{ &Z_Construct_UFunction_UActionOpenChest_GetControllerFromPerformer, "GetControllerFromPerformer" }, // 3076756708
		{ &Z_Construct_UFunction_UActionOpenChest_OnInitialize, "OnInitialize" }, // 720461193
		{ &Z_Construct_UFunction_UActionOpenChest_PerformAction, "PerformAction" }, // 1165783457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionOpenChest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionOpenChest_Statics::NewProp_OpenChestPathPoint = { "OpenChestPathPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionOpenChest, OpenChestPathPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenChestPathPoint_MetaData), NewProp_OpenChestPathPoint_MetaData) };
void Z_Construct_UClass_UActionOpenChest_Statics::NewProp_bHasReachedDestination_SetBit(void* Obj)
{
	((UActionOpenChest*)Obj)->bHasReachedDestination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionOpenChest_Statics::NewProp_bHasReachedDestination = { "bHasReachedDestination", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActionOpenChest), &Z_Construct_UClass_UActionOpenChest_Statics::NewProp_bHasReachedDestination_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReachedDestination_MetaData), NewProp_bHasReachedDestination_MetaData) };
void Z_Construct_UClass_UActionOpenChest_Statics::NewProp_IsMoving_SetBit(void* Obj)
{
	((UActionOpenChest*)Obj)->IsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionOpenChest_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActionOpenChest), &Z_Construct_UClass_UActionOpenChest_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMoving_MetaData), NewProp_IsMoving_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionOpenChest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionOpenChest_Statics::NewProp_OpenChestPathPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionOpenChest_Statics::NewProp_bHasReachedDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionOpenChest_Statics::NewProp_IsMoving,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionOpenChest_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UActionOpenChest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionOpenChest_Statics::PropPointers),
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
		{ Z_Construct_UClass_UActionOpenChest, UActionOpenChest::StaticClass, TEXT("UActionOpenChest"), &Z_Registration_Info_UClass_UActionOpenChest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionOpenChest), 1682347279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_ActionOpenChest_h_1693034192(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_ActionOpenChest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_ActionOpenChest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
