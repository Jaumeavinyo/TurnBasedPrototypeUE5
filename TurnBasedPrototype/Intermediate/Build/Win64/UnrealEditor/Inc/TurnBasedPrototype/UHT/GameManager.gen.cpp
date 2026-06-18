// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/GameManager/GameManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UGameManager();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UGameManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UGameManager Function AddControlledCharacter
struct Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics
{
	struct GameManager_eventAddControlledCharacter_Parms
	{
		ABaseCharacter* actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventAddControlledCharacter_Parms, actor), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::NewProp_actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "AddControlledCharacter", nullptr, nullptr, Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::GameManager_eventAddControlledCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::GameManager_eventAddControlledCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameManager_AddControlledCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameManager_AddControlledCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameManager::execAddControlledCharacter)
{
	P_GET_OBJECT(ABaseCharacter,Z_Param_actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddControlledCharacter(Z_Param_actor);
	P_NATIVE_END;
}
// End Class UGameManager Function AddControlledCharacter

// Begin Class UGameManager Function removeControlledCharacter
struct Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics
{
	struct GameManager_eventremoveControlledCharacter_Parms
	{
		ABaseCharacter* actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called from puppetcomp.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called from puppetcomp." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventremoveControlledCharacter_Parms, actor), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::NewProp_actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "removeControlledCharacter", nullptr, nullptr, Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::GameManager_eventremoveControlledCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::GameManager_eventremoveControlledCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameManager_removeControlledCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameManager_removeControlledCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameManager::execremoveControlledCharacter)
{
	P_GET_OBJECT(ABaseCharacter,Z_Param_actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->removeControlledCharacter(Z_Param_actor);
	P_NATIVE_END;
}
// End Class UGameManager Function removeControlledCharacter

// Begin Class UGameManager Function RequestAuthorizationToAct
struct Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics
{
	struct GameManager_eventRequestAuthorizationToAct_Parms
	{
		ABaseCharacter* performer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called from puppetcomp.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called from puppetcomp." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_performer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::NewProp_performer = { "performer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventRequestAuthorizationToAct_Parms, performer), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameManager_eventRequestAuthorizationToAct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameManager_eventRequestAuthorizationToAct_Parms), &Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::NewProp_performer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "RequestAuthorizationToAct", nullptr, nullptr, Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::GameManager_eventRequestAuthorizationToAct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::GameManager_eventRequestAuthorizationToAct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameManager::execRequestAuthorizationToAct)
{
	P_GET_OBJECT(ABaseCharacter,Z_Param_performer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestAuthorizationToAct(Z_Param_performer);
	P_NATIVE_END;
}
// End Class UGameManager Function RequestAuthorizationToAct

// Begin Class UGameManager
void UGameManager::StaticRegisterNativesUGameManager()
{
	UClass* Class = UGameManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddControlledCharacter", &UGameManager::execAddControlledCharacter },
		{ "removeControlledCharacter", &UGameManager::execremoveControlledCharacter },
		{ "RequestAuthorizationToAct", &UGameManager::execRequestAuthorizationToAct },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameManager);
UClass* Z_Construct_UClass_UGameManager_NoRegister()
{
	return UGameManager::StaticClass();
}
struct Z_Construct_UClass_UGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameManager/GameManager.h" },
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledCharacters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of actors that are currently performing actions in OnInitialize() || PerformAction() || FinishAction() FinishAction should remove them from this list\n" },
#endif
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actors that are currently performing actions in OnInitialize() || PerformAction() || FinishAction() FinishAction should remove them from this list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentTurnIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager/GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlledCharacters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentTurnIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameManager_AddControlledCharacter, "AddControlledCharacter" }, // 1275082846
		{ &Z_Construct_UFunction_UGameManager_removeControlledCharacter, "removeControlledCharacter" }, // 4240863313
		{ &Z_Construct_UFunction_UGameManager_RequestAuthorizationToAct, "RequestAuthorizationToAct" }, // 3008735216
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledCharacters_Inner = { "ControlledCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledCharacters = { "ControlledCharacters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameManager, ControlledCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledCharacters_MetaData), NewProp_ControlledCharacters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_currentTurnIndex = { "currentTurnIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameManager, currentTurnIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentTurnIndex_MetaData), NewProp_currentTurnIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_ControlledCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_currentTurnIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameManager_Statics::ClassParams = {
	&UGameManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameManager()
{
	if (!Z_Registration_Info_UClass_UGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameManager.OuterSingleton, Z_Construct_UClass_UGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameManager.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UGameManager>()
{
	return UGameManager::StaticClass();
}
UGameManager::UGameManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManager);
UGameManager::~UGameManager() {}
// End Class UGameManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameManager, UGameManager::StaticClass, TEXT("UGameManager"), &Z_Registration_Info_UClass_UGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameManager), 3032805855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_1747569152(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_GameManager_GameManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
