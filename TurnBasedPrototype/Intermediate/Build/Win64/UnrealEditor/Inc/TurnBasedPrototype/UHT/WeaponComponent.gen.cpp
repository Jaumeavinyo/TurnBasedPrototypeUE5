// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponComponent();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_AttackType();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UWeaponComponent Function EquipWeapon
struct Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics
{
	struct WeaponComponent_eventEquipWeapon_Parms
	{
		TSubclassOf<ABaseWeapon> newWeapon;
		FName socket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//makes currentWeapon nullptr, then takes a weapon from inventory, spawns it, calls SetCurrentSocket(FName name) and makes it current\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "makes currentWeapon nullptr, then takes a weapon from inventory, spawns it, calls SetCurrentSocket(FName name) and makes it current" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_newWeapon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_newWeapon = { "newWeapon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventEquipWeapon_Parms, newWeapon), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventEquipWeapon_Parms, socket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_newWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_socket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "EquipWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::WeaponComponent_eventEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::WeaponComponent_eventEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execEquipWeapon)
{
	P_GET_OBJECT(UClass,Z_Param_newWeapon);
	P_GET_PROPERTY(FNameProperty,Z_Param_socket);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipWeapon(Z_Param_newWeapon,Z_Param_socket);
	P_NATIVE_END;
}
// End Class UWeaponComponent Function EquipWeapon

// Begin Class UWeaponComponent Function GetCurrentWeapon
struct Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics
{
	struct WeaponComponent_eventGetCurrentWeapon_Parms
	{
		ABaseWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//returns the current weapon that the character is using\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "returns the current weapon that the character is using" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetCurrentWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::WeaponComponent_eventGetCurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::WeaponComponent_eventGetCurrentWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetCurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABaseWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function GetCurrentWeapon

// Begin Class UWeaponComponent Function GetCurrentWeaponData
struct Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics
{
	struct WeaponComponent_eventGetCurrentWeaponData_Parms
	{
		UWeaponDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventGetCurrentWeaponData_Parms, ReturnValue), Z_Construct_UClass_UWeaponDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetCurrentWeaponData", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::WeaponComponent_eventGetCurrentWeaponData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::WeaponComponent_eventGetCurrentWeaponData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetCurrentWeaponData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWeaponDataAsset**)Z_Param__Result=P_THIS->GetCurrentWeaponData();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function GetCurrentWeaponData

// Begin Class UWeaponComponent Function performAttack
struct Z_Construct_UFunction_UWeaponComponent_performAttack_Statics
{
	struct WeaponComponent_eventperformAttack_Parms
	{
		AttackType attackType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_attackType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventperformAttack_Parms, attackType), Z_Construct_UEnum_TurnBasedPrototype_AttackType, METADATA_PARAMS(0, nullptr) }; // 4006511375
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::NewProp_attackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::NewProp_attackType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "performAttack", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::WeaponComponent_eventperformAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::WeaponComponent_eventperformAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_performAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_performAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execperformAttack)
{
	P_GET_ENUM(AttackType,Z_Param_attackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->performAttack(AttackType(Z_Param_attackType));
	P_NATIVE_END;
}
// End Class UWeaponComponent Function performAttack

// Begin Class UWeaponComponent Function SetCurrentSocket
struct Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics
{
	struct WeaponComponent_eventSetCurrentSocket_Parms
	{
		FName name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//should be called from from abp animNotify. changes weapon position between body sockets\n" },
#endif
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "should be called from from abp animNotify. changes weapon position between body sockets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventSetCurrentSocket_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::NewProp_name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "SetCurrentSocket", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::WeaponComponent_eventSetCurrentSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::WeaponComponent_eventSetCurrentSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execSetCurrentSocket)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentSocket(Z_Param_name);
	P_NATIVE_END;
}
// End Class UWeaponComponent Function SetCurrentSocket

// Begin Class UWeaponComponent
void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
{
	UClass* Class = UWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipWeapon", &UWeaponComponent::execEquipWeapon },
		{ "GetCurrentWeapon", &UWeaponComponent::execGetCurrentWeapon },
		{ "GetCurrentWeaponData", &UWeaponComponent::execGetCurrentWeaponData },
		{ "performAttack", &UWeaponComponent::execperformAttack },
		{ "SetCurrentSocket", &UWeaponComponent::execSetCurrentSocket },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
{
	return UWeaponComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_currentWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_EquipWeapon, "EquipWeapon" }, // 527390298
		{ &Z_Construct_UFunction_UWeaponComponent_GetCurrentWeapon, "GetCurrentWeapon" }, // 1523892033
		{ &Z_Construct_UFunction_UWeaponComponent_GetCurrentWeaponData, "GetCurrentWeaponData" }, // 415896152
		{ &Z_Construct_UFunction_UWeaponComponent_performAttack, "performAttack" }, // 535370212
		{ &Z_Construct_UFunction_UWeaponComponent_SetCurrentSocket, "SetCurrentSocket" }, // 2234705983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeaponClass = { "DefaultWeaponClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, DefaultWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponClass_MetaData), NewProp_DefaultWeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_currentWeapon = { "currentWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, currentWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentWeapon_MetaData), NewProp_currentWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_DefaultWeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_currentWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
	&UWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UWeaponComponent>()
{
	return UWeaponComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
UWeaponComponent::~UWeaponComponent() {}
// End Class UWeaponComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 3863643824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponComponent_h_1827970482(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_WeaponComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
