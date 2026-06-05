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
TURNBASEDPROTOTYPE_API UScriptStruct* Z_Construct_UScriptStruct_FActionContext();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin ScriptStruct FActionContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionContext;
class UScriptStruct* FActionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionContext, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("ActionContext"));
	}
	return Z_Registration_Info_UScriptStruct_ActionContext.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UScriptStruct* StaticStruct<FActionContext>()
{
	return FActionContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActionContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Performer_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Who does this action\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Who does this action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Performer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionContext_Statics::NewProp_Performer = { "Performer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionContext, Performer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Performer_MetaData), NewProp_Performer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionContext_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionContext, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionContext_Statics::NewProp_Performer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionContext_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	&NewStructOps,
	"ActionContext",
	Z_Construct_UScriptStruct_FActionContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionContext_Statics::PropPointers),
	sizeof(FActionContext),
	alignof(FActionContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActionContext()
{
	if (!Z_Registration_Info_UScriptStruct_ActionContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionContext.InnerSingleton, Z_Construct_UScriptStruct_FActionContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActionContext.InnerSingleton;
}
// End ScriptStruct FActionContext

// Begin Class UBaseAction Function InitializeAction
struct Z_Construct_UFunction_UBaseAction_InitializeAction_Statics
{
	struct BaseAction_eventInitializeAction_Parms
	{
		FActionContext context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAction_eventInitializeAction_Parms, context), Z_Construct_UScriptStruct_FActionContext, METADATA_PARAMS(0, nullptr) }; // 2387228641
void Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseAction_eventInitializeAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseAction_eventInitializeAction_Parms), &Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAction, nullptr, "InitializeAction", nullptr, nullptr, Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::BaseAction_eventInitializeAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::BaseAction_eventInitializeAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAction_InitializeAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAction::execInitializeAction)
{
	P_GET_STRUCT_REF(FActionContext,Z_Param_Out_context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeAction(Z_Param_Out_context);
	P_NATIVE_END;
}
// End Class UBaseAction Function InitializeAction

// Begin Class UBaseAction
void UBaseAction::StaticRegisterNativesUBaseAction()
{
	UClass* Class = UBaseAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeAction", &UBaseAction::execInitializeAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAction_InitializeAction, "InitializeAction" }, // 1309022771
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UBaseAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActionContext::StaticStruct, Z_Construct_UScriptStruct_FActionContext_Statics::NewStructOps, TEXT("ActionContext"), &Z_Registration_Info_UScriptStruct_ActionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionContext), 2387228641U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAction, UBaseAction::StaticClass, TEXT("UBaseAction"), &Z_Registration_Info_UClass_UBaseAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAction), 1956099426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_3787742310(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
