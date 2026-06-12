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
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UBaseAction_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UPuppetComponent();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UPuppetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UPuppetComponent Function ClearActionQueue
struct Z_Construct_UFunction_UPuppetComponent_ClearActionQueue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuppetComponent_ClearActionQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuppetComponent, nullptr, "ClearActionQueue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_ClearActionQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuppetComponent_ClearActionQueue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPuppetComponent_ClearActionQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuppetComponent_ClearActionQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPuppetComponent::execClearActionQueue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearActionQueue();
	P_NATIVE_END;
}
// End Class UPuppetComponent Function ClearActionQueue

// Begin Class UPuppetComponent Function EnqueueAction
struct Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics
{
	struct PuppetComponent_eventEnqueueAction_Parms
	{
		UBaseAction* Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuppetComponent_eventEnqueueAction_Parms, Action), Z_Construct_UClass_UBaseAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuppetComponent, nullptr, "EnqueueAction", nullptr, nullptr, Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::PuppetComponent_eventEnqueueAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::PuppetComponent_eventEnqueueAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPuppetComponent_EnqueueAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuppetComponent_EnqueueAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPuppetComponent::execEnqueueAction)
{
	P_GET_OBJECT(UBaseAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnqueueAction(Z_Param_Action);
	P_NATIVE_END;
}
// End Class UPuppetComponent Function EnqueueAction

// Begin Class UPuppetComponent Function GetCurrentAction
struct Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics
{
	struct PuppetComponent_eventGetCurrentAction_Parms
	{
		UBaseAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuppetComponent_eventGetCurrentAction_Parms, ReturnValue), Z_Construct_UClass_UBaseAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuppetComponent, nullptr, "GetCurrentAction", nullptr, nullptr, Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::PuppetComponent_eventGetCurrentAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::PuppetComponent_eventGetCurrentAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPuppetComponent_GetCurrentAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuppetComponent_GetCurrentAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPuppetComponent::execGetCurrentAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseAction**)Z_Param__Result=P_THIS->GetCurrentAction();
	P_NATIVE_END;
}
// End Class UPuppetComponent Function GetCurrentAction

// Begin Class UPuppetComponent Function HasQueuedActions
struct Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics
{
	struct PuppetComponent_eventHasQueuedActions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PuppetComponent_eventHasQueuedActions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuppetComponent_eventHasQueuedActions_Parms), &Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuppetComponent, nullptr, "HasQueuedActions", nullptr, nullptr, Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::PuppetComponent_eventHasQueuedActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::PuppetComponent_eventHasQueuedActions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPuppetComponent_HasQueuedActions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuppetComponent_HasQueuedActions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPuppetComponent::execHasQueuedActions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasQueuedActions();
	P_NATIVE_END;
}
// End Class UPuppetComponent Function HasQueuedActions

// Begin Class UPuppetComponent Function IsExecutingAction
struct Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics
{
	struct PuppetComponent_eventIsExecutingAction_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PuppetComponent_eventIsExecutingAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuppetComponent_eventIsExecutingAction_Parms), &Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuppetComponent, nullptr, "IsExecutingAction", nullptr, nullptr, Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::PuppetComponent_eventIsExecutingAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::PuppetComponent_eventIsExecutingAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPuppetComponent_IsExecutingAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuppetComponent_IsExecutingAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPuppetComponent::execIsExecutingAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsExecutingAction();
	P_NATIVE_END;
}
// End Class UPuppetComponent Function IsExecutingAction

// Begin Class UPuppetComponent
void UPuppetComponent::StaticRegisterNativesUPuppetComponent()
{
	UClass* Class = UPuppetComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearActionQueue", &UPuppetComponent::execClearActionQueue },
		{ "EnqueueAction", &UPuppetComponent::execEnqueueAction },
		{ "GetCurrentAction", &UPuppetComponent::execGetCurrentAction },
		{ "HasQueuedActions", &UPuppetComponent::execHasQueuedActions },
		{ "IsExecutingAction", &UPuppetComponent::execIsExecutingAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionsArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsProcessingAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/PuppetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionsArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAction;
	static void NewProp_bIsProcessingAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProcessingAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuppetComponent_ClearActionQueue, "ClearActionQueue" }, // 3873258547
		{ &Z_Construct_UFunction_UPuppetComponent_EnqueueAction, "EnqueueAction" }, // 1819916628
		{ &Z_Construct_UFunction_UPuppetComponent_GetCurrentAction, "GetCurrentAction" }, // 67708518
		{ &Z_Construct_UFunction_UPuppetComponent_HasQueuedActions, "HasQueuedActions" }, // 3697555542
		{ &Z_Construct_UFunction_UPuppetComponent_IsExecutingAction, "IsExecutingAction" }, // 1397587521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuppetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuppetComponent_Statics::NewProp_ActionsArray_Inner = { "ActionsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuppetComponent_Statics::NewProp_ActionsArray = { "ActionsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuppetComponent, ActionsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionsArray_MetaData), NewProp_ActionsArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuppetComponent_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuppetComponent, CurrentAction), Z_Construct_UClass_UBaseAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAction_MetaData), NewProp_CurrentAction_MetaData) };
void Z_Construct_UClass_UPuppetComponent_Statics::NewProp_bIsProcessingAction_SetBit(void* Obj)
{
	((UPuppetComponent*)Obj)->bIsProcessingAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuppetComponent_Statics::NewProp_bIsProcessingAction = { "bIsProcessingAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuppetComponent), &Z_Construct_UClass_UPuppetComponent_Statics::NewProp_bIsProcessingAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsProcessingAction_MetaData), NewProp_bIsProcessingAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuppetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuppetComponent_Statics::NewProp_ActionsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuppetComponent_Statics::NewProp_ActionsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuppetComponent_Statics::NewProp_CurrentAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuppetComponent_Statics::NewProp_bIsProcessingAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuppetComponent_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UPuppetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPuppetComponent_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPuppetComponent, UPuppetComponent::StaticClass, TEXT("UPuppetComponent"), &Z_Registration_Info_UClass_UPuppetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuppetComponent), 1806335444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_PuppetComponent_h_1887994148(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_PuppetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_PuppetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
