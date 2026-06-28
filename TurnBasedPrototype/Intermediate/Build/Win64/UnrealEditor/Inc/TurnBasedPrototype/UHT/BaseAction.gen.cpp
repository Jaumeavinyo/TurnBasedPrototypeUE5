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
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_ActionState();
TURNBASEDPROTOTYPE_API UScriptStruct* Z_Construct_UScriptStruct_FActionContext();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Enum ActionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ActionState;
static UEnum* ActionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ActionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_ActionState, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("ActionState"));
	}
	return Z_Registration_Info_UEnum_ActionState.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<ActionState>()
{
	return ActionState_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_ActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Close.DisplayName", "Close" },
		{ "Close.Name", "Close" },
		{ "Finish.DisplayName", "Finish" },
		{ "Finish.Name", "Finish" },
		{ "Initialize.DisplayName", "Initialize" },
		{ "Initialize.Name", "Initialize" },
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
		{ "None.DisplayName", "Initialize" },
		{ "None.Name", "None" },
		{ "Perform.DisplayName", "perform" },
		{ "Perform.Name", "Perform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "Initialize", (int64)Initialize },
		{ "Perform", (int64)Perform },
		{ "Finish", (int64)Finish },
		{ "Close", (int64)Close },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_ActionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"ActionState",
	"ActionState",
	Z_Construct_UEnum_TurnBasedPrototype_ActionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_ActionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_ActionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_ActionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_ActionState()
{
	if (!Z_Registration_Info_UEnum_ActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ActionState.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_ActionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ActionState.InnerSingleton;
}
// End Enum ActionState

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
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Performer_MetaData[] = {
		{ "Category", "Action Context" },
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Action Context" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionContext_Statics::NewProp_Performer = { "Performer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionContext, Performer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Performer_MetaData), NewProp_Performer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionContext_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionContext, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
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
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAction_eventInitializeAction_Parms, context), Z_Construct_UScriptStruct_FActionContext, METADATA_PARAMS(0, nullptr) }; // 1237543545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAction_InitializeAction_Statics::NewProp_context,
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
	P_THIS->InitializeAction(Z_Param_Out_context);
	P_NATIVE_END;
}
// End Class UBaseAction Function InitializeAction

// Begin Class UBaseAction Function SetActionContext
struct Z_Construct_UFunction_UBaseAction_SetActionContext_Statics
{
	struct BaseAction_eventSetActionContext_Parms
	{
		AActor* targetActor;
		AActor* performer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//called from game manager\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called from game manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_performer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAction_eventSetActionContext_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::NewProp_performer = { "performer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAction_eventSetActionContext_Parms, performer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::NewProp_targetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::NewProp_performer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAction, nullptr, "SetActionContext", nullptr, nullptr, Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::BaseAction_eventSetActionContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::BaseAction_eventSetActionContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAction_SetActionContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAction_SetActionContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAction::execSetActionContext)
{
	P_GET_OBJECT(AActor,Z_Param_targetActor);
	P_GET_OBJECT(AActor,Z_Param_performer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionContext(Z_Param_targetActor,Z_Param_performer);
	P_NATIVE_END;
}
// End Class UBaseAction Function SetActionContext

// Begin Class UBaseAction
void UBaseAction::StaticRegisterNativesUBaseAction()
{
	UClass* Class = UBaseAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeAction", &UBaseAction::execInitializeAction },
		{ "SetActionContext", &UBaseAction::execSetActionContext },
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
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameManager/BaseAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionContext_MetaData[] = {
		{ "Category", "BaseAction" },
		{ "ModuleRelativePath", "Public/GameManager/BaseAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAction_InitializeAction, "InitializeAction" }, // 2153270671
		{ &Z_Construct_UFunction_UBaseAction_SetActionContext, "SetActionContext" }, // 402565302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionContext = { "ActionContext", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAction, ActionContext), Z_Construct_UScriptStruct_FActionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionContext_MetaData), NewProp_ActionContext_MetaData) }; // 1237543545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAction_Statics::NewProp_ActionContext,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ActionState_StaticEnum, TEXT("ActionState"), &Z_Registration_Info_UEnum_ActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1207246001U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActionContext::StaticStruct, Z_Construct_UScriptStruct_FActionContext_Statics::NewStructOps, TEXT("ActionContext"), &Z_Registration_Info_UScriptStruct_ActionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionContext), 1237543545U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAction, UBaseAction::StaticClass, TEXT("UBaseAction"), &Z_Registration_Info_UClass_UBaseAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAction), 1562821738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_4240924638(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_BaseAction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
