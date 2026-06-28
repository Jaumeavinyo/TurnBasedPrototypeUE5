// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/ActionAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionAttack() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UActionAttack();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UActionAttack_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UAttackDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UBaseAction();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UActionAttack Function FinishAction
struct Z_Construct_UFunction_UActionAttack_FinishAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//called from game manager\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called from game manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAttack_FinishAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAttack, nullptr, "FinishAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_FinishAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionAttack_FinishAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UActionAttack_FinishAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionAttack_FinishAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionAttack::execFinishAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishAction();
	P_NATIVE_END;
}
// End Class UActionAttack Function FinishAction

// Begin Class UActionAttack Function GetControllerFromPerformer
struct Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics
{
	struct ActionAttack_eventGetControllerFromPerformer_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//called from game manager\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called from game manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionAttack_eventGetControllerFromPerformer_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAttack, nullptr, "GetControllerFromPerformer", nullptr, nullptr, Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::ActionAttack_eventGetControllerFromPerformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::ActionAttack_eventGetControllerFromPerformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionAttack::execGetControllerFromPerformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetControllerFromPerformer();
	P_NATIVE_END;
}
// End Class UActionAttack Function GetControllerFromPerformer

// Begin Class UActionAttack Function isPlayingAnimMontage
struct Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics
{
	struct ActionAttack_eventisPlayingAnimMontage_Parms
	{
		UAnimMontage* montage;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_montage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionAttack_eventisPlayingAnimMontage_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActionAttack_eventisPlayingAnimMontage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActionAttack_eventisPlayingAnimMontage_Parms), &Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::NewProp_montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAttack, nullptr, "isPlayingAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::ActionAttack_eventisPlayingAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::ActionAttack_eventisPlayingAnimMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionAttack::execisPlayingAnimMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->isPlayingAnimMontage(Z_Param_montage);
	P_NATIVE_END;
}
// End Class UActionAttack Function isPlayingAnimMontage

// Begin Class UActionAttack Function OnInitialize
struct Z_Construct_UFunction_UActionAttack_OnInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAttack_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAttack, nullptr, "OnInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_OnInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionAttack_OnInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UActionAttack_OnInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionAttack_OnInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionAttack::execOnInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInitialize();
	P_NATIVE_END;
}
// End Class UActionAttack Function OnInitialize

// Begin Class UActionAttack Function PerformAction
struct Z_Construct_UFunction_UActionAttack_PerformAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//overrided by programmer but called from InitializeAction\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "overrided by programmer but called from InitializeAction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAttack_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAttack, nullptr, "PerformAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_PerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionAttack_PerformAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UActionAttack_PerformAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionAttack_PerformAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionAttack::execPerformAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformAction();
	P_NATIVE_END;
}
// End Class UActionAttack Function PerformAction

// Begin Class UActionAttack Function SetAttackActionValues
struct Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics
{
	struct ActionAttack_eventSetAttackActionValues_Parms
	{
		UWeaponDataAsset* weaponDataAsset;
		UAttackDataAsset* attackDataAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_attackDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::NewProp_weaponDataAsset = { "weaponDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionAttack_eventSetAttackActionValues_Parms, weaponDataAsset), Z_Construct_UClass_UWeaponDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::NewProp_attackDataAsset = { "attackDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionAttack_eventSetAttackActionValues_Parms, attackDataAsset), Z_Construct_UClass_UAttackDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::NewProp_weaponDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::NewProp_attackDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAttack, nullptr, "SetAttackActionValues", nullptr, nullptr, Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::ActionAttack_eventSetAttackActionValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::ActionAttack_eventSetAttackActionValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActionAttack_SetAttackActionValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionAttack_SetAttackActionValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActionAttack::execSetAttackActionValues)
{
	P_GET_OBJECT(UWeaponDataAsset,Z_Param_weaponDataAsset);
	P_GET_OBJECT(UAttackDataAsset,Z_Param_attackDataAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttackActionValues(Z_Param_weaponDataAsset,Z_Param_attackDataAsset);
	P_NATIVE_END;
}
// End Class UActionAttack Function SetAttackActionValues

// Begin Class UActionAttack
void UActionAttack::StaticRegisterNativesUActionAttack()
{
	UClass* Class = UActionAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishAction", &UActionAttack::execFinishAction },
		{ "GetControllerFromPerformer", &UActionAttack::execGetControllerFromPerformer },
		{ "isPlayingAnimMontage", &UActionAttack::execisPlayingAnimMontage },
		{ "OnInitialize", &UActionAttack::execOnInitialize },
		{ "PerformAction", &UActionAttack::execPerformAction },
		{ "SetAttackActionValues", &UActionAttack::execSetAttackActionValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionAttack);
UClass* Z_Construct_UClass_UActionAttack_NoRegister()
{
	return UActionAttack::StaticClass();
}
struct Z_Construct_UClass_UActionAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionAttack.h" },
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[] = {
		{ "Category", "ActionAttack" },
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackData_MetaData[] = {
		{ "Category", "ActionAttack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The weapon being used\n//old\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The weapon being used\nold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimMontage_MetaData[] = {
		{ "Category", "ActionAttack" },
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attackInProcess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponDrawed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actionPerformer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimMontage;
	static void NewProp_IsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
	static void NewProp_attackInProcess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_attackInProcess;
	static void NewProp_bIsWeaponDrawed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponDrawed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actionPerformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionAttack_FinishAction, "FinishAction" }, // 326282386
		{ &Z_Construct_UFunction_UActionAttack_GetControllerFromPerformer, "GetControllerFromPerformer" }, // 1193494488
		{ &Z_Construct_UFunction_UActionAttack_isPlayingAnimMontage, "isPlayingAnimMontage" }, // 1089804387
		{ &Z_Construct_UFunction_UActionAttack_OnInitialize, "OnInitialize" }, // 2866744415
		{ &Z_Construct_UFunction_UActionAttack_PerformAction, "PerformAction" }, // 3844901279
		{ &Z_Construct_UFunction_UActionAttack_SetAttackActionValues, "SetAttackActionValues" }, // 3016198779
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionAttack_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionAttack, WeaponData), Z_Construct_UClass_UWeaponDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponData_MetaData), NewProp_WeaponData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionAttack_Statics::NewProp_AttackData = { "AttackData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionAttack, AttackData), Z_Construct_UClass_UAttackDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackData_MetaData), NewProp_AttackData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionAttack_Statics::NewProp_AttackAnimMontage = { "AttackAnimMontage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionAttack, AttackAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimMontage_MetaData), NewProp_AttackAnimMontage_MetaData) };
void Z_Construct_UClass_UActionAttack_Statics::NewProp_IsMoving_SetBit(void* Obj)
{
	((UActionAttack*)Obj)->IsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionAttack_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActionAttack), &Z_Construct_UClass_UActionAttack_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMoving_MetaData), NewProp_IsMoving_MetaData) };
void Z_Construct_UClass_UActionAttack_Statics::NewProp_attackInProcess_SetBit(void* Obj)
{
	((UActionAttack*)Obj)->attackInProcess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionAttack_Statics::NewProp_attackInProcess = { "attackInProcess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActionAttack), &Z_Construct_UClass_UActionAttack_Statics::NewProp_attackInProcess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attackInProcess_MetaData), NewProp_attackInProcess_MetaData) };
void Z_Construct_UClass_UActionAttack_Statics::NewProp_bIsWeaponDrawed_SetBit(void* Obj)
{
	((UActionAttack*)Obj)->bIsWeaponDrawed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionAttack_Statics::NewProp_bIsWeaponDrawed = { "bIsWeaponDrawed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActionAttack), &Z_Construct_UClass_UActionAttack_Statics::NewProp_bIsWeaponDrawed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWeaponDrawed_MetaData), NewProp_bIsWeaponDrawed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionAttack_Statics::NewProp_actionPerformer = { "actionPerformer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionAttack, actionPerformer), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actionPerformer_MetaData), NewProp_actionPerformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAttack_Statics::NewProp_WeaponData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAttack_Statics::NewProp_AttackData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAttack_Statics::NewProp_AttackAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAttack_Statics::NewProp_IsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAttack_Statics::NewProp_attackInProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAttack_Statics::NewProp_bIsWeaponDrawed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAttack_Statics::NewProp_actionPerformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActionAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAction,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionAttack_Statics::ClassParams = {
	&UActionAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActionAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionAttack()
{
	if (!Z_Registration_Info_UClass_UActionAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionAttack.OuterSingleton, Z_Construct_UClass_UActionAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionAttack.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UActionAttack>()
{
	return UActionAttack::StaticClass();
}
UActionAttack::UActionAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionAttack);
UActionAttack::~UActionAttack() {}
// End Class UActionAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionAttack, UActionAttack::StaticClass, TEXT("UActionAttack"), &Z_Registration_Info_UClass_UActionAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionAttack), 1741139792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_3701481766(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_ActionAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
