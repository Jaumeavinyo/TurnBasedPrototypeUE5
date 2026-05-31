// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ADoor();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UDoorDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class ADoor Function CloseDoor
struct Z_Construct_UFunction_ADoor_CloseDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "CloseDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_CloseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_CloseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execCloseDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDoor();
	P_NATIVE_END;
}
// End Class ADoor Function CloseDoor

// Begin Class ADoor Function GetSupportedInteractionsBP
struct Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics
{
	struct Door_eventGetSupportedInteractionsBP_Parms
	{
		TArray<EInteractionType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint callable version\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint callable version" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 821326794
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Door_eventGetSupportedInteractionsBP_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 821326794
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "GetSupportedInteractionsBP", nullptr, nullptr, Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::Door_eventGetSupportedInteractionsBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::Door_eventGetSupportedInteractionsBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execGetSupportedInteractionsBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EInteractionType>*)Z_Param__Result=P_THIS->GetSupportedInteractionsBP();
	P_NATIVE_END;
}
// End Class ADoor Function GetSupportedInteractionsBP

// Begin Class ADoor Function OnDoorRotateFinished
struct Z_Construct_UFunction_ADoor_OnDoorRotateFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorRotateFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorRotateFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorRotateFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorRotateFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorRotateFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorRotateFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOnDoorRotateFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorRotateFinished();
	P_NATIVE_END;
}
// End Class ADoor Function OnDoorRotateFinished

// Begin Class ADoor Function OnDoorRotateUpdate
struct Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics
{
	struct Door_eventOnDoorRotateUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timeline callback functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timeline callback functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Door_eventOnDoorRotateUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorRotateUpdate", nullptr, nullptr, Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::Door_eventOnDoorRotateUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::Door_eventOnDoorRotateUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_OnDoorRotateUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorRotateUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOnDoorRotateUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorRotateUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ADoor Function OnDoorRotateUpdate

// Begin Class ADoor Function OpenDoor
struct Z_Construct_UFunction_ADoor_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Open/Close functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open/Close functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OpenDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOpenDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDoor();
	P_NATIVE_END;
}
// End Class ADoor Function OpenDoor

// Begin Class ADoor Function ToggleDoor
struct Z_Construct_UFunction_ADoor_ToggleDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_ToggleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "ToggleDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_ToggleDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_ToggleDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_ToggleDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_ToggleDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execToggleDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleDoor();
	P_NATIVE_END;
}
// End Class ADoor Function ToggleDoor

// Begin Class ADoor
void ADoor::StaticRegisterNativesADoor()
{
	UClass* Class = ADoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseDoor", &ADoor::execCloseDoor },
		{ "GetSupportedInteractionsBP", &ADoor::execGetSupportedInteractionsBP },
		{ "OnDoorRotateFinished", &ADoor::execOnDoorRotateFinished },
		{ "OnDoorRotateUpdate", &ADoor::execOnDoorRotateUpdate },
		{ "OpenDoor", &ADoor::execOpenDoor },
		{ "ToggleDoor", &ADoor::execToggleDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::StaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMeshComponent_MetaData[] = {
		{ "Category", "DoorMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[] = {
		{ "Category", "Door Data" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
		{ "Category", "Door Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation settings\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Door Rotation" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[] = {
		{ "Category", "Door Rotation" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpenClockwise_MetaData[] = {
		{ "Category", "Door Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which way the door opens\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which way the door opens" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
	static void NewProp_bOpenClockwise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenClockwise;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_CloseDoor, "CloseDoor" }, // 1304524634
		{ &Z_Construct_UFunction_ADoor_GetSupportedInteractionsBP, "GetSupportedInteractionsBP" }, // 1839099045
		{ &Z_Construct_UFunction_ADoor_OnDoorRotateFinished, "OnDoorRotateFinished" }, // 3714939229
		{ &Z_Construct_UFunction_ADoor_OnDoorRotateUpdate, "OnDoorRotateUpdate" }, // 1072308326
		{ &Z_Construct_UFunction_ADoor_OpenDoor, "OpenDoor" }, // 2561066269
		{ &Z_Construct_UFunction_ADoor_ToggleDoor, "ToggleDoor" }, // 3412663571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen_SetBit(void* Obj)
{
	((ADoor*)Obj)->bIsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOpen_MetaData), NewProp_bIsOpen_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((ADoor*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorMeshComponent = { "DoorMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMeshComponent_MetaData), NewProp_DoorMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorData), Z_Construct_UClass_UDoorDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, OpenAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAngle_MetaData), NewProp_OpenAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCurve_MetaData), NewProp_RotationCurve_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bOpenClockwise_SetBit(void* Obj)
{
	((ADoor*)Obj)->bOpenClockwise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bOpenClockwise = { "bOpenClockwise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bOpenClockwise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpenClockwise_MetaData), NewProp_bOpenClockwise_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_OpenAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bOpenClockwise,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ADoor, IInteractable), false },  // 1148941949
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<ADoor>()
{
	return ADoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
ADoor::~ADoor() {}
// End Class ADoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Door_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 3061674309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Door_h_2305761062(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Door_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
