// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedPrototypePlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ATurnBasedPrototypePlayerController();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ATurnBasedPrototypePlayerController_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractionMenuWidget_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Enum MouseSymbol
static FEnumRegistrationInfo Z_Registration_Info_UEnum_MouseSymbol;
static UEnum* MouseSymbol_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_MouseSymbol.OuterSingleton)
	{
		Z_Registration_Info_UEnum_MouseSymbol.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol, (UObject*)Z_Construct_UPackage__Script_TurnBasedPrototype(), TEXT("MouseSymbol"));
	}
	return Z_Registration_Info_UEnum_MouseSymbol.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UEnum* StaticEnum<MouseSymbol>()
{
	return MouseSymbol_StaticEnum();
}
struct Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "Attack" },
		{ "Attack.Name", "MouseSymbol::Attack" },
		{ "BlueprintType", "true" },
		{ "ClickHand.DisplayName", "ClickHand" },
		{ "ClickHand.Name", "MouseSymbol::ClickHand" },
		{ "Dialogue.DisplayName", "Dialogue" },
		{ "Dialogue.Name", "MouseSymbol::Dialogue" },
		{ "Hand.DisplayName", "Hand" },
		{ "Hand.Name", "MouseSymbol::Hand" },
		{ "Interact.DisplayName", "Interact" },
		{ "Interact.Name", "MouseSymbol::Interact" },
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
		{ "None.DisplayName", "none" },
		{ "None.Name", "MouseSymbol::None" },
		{ "OpenChest.DisplayName", "OpenChest" },
		{ "OpenChest.Name", "MouseSymbol::OpenChest" },
		{ "OpenDoor.DisplayName", "OpenDoor" },
		{ "OpenDoor.Name", "MouseSymbol::OpenDoor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MouseSymbol::None", (int64)MouseSymbol::None },
		{ "MouseSymbol::Hand", (int64)MouseSymbol::Hand },
		{ "MouseSymbol::ClickHand", (int64)MouseSymbol::ClickHand },
		{ "MouseSymbol::Dialogue", (int64)MouseSymbol::Dialogue },
		{ "MouseSymbol::Interact", (int64)MouseSymbol::Interact },
		{ "MouseSymbol::OpenDoor", (int64)MouseSymbol::OpenDoor },
		{ "MouseSymbol::OpenChest", (int64)MouseSymbol::OpenChest },
		{ "MouseSymbol::Attack", (int64)MouseSymbol::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
	nullptr,
	"MouseSymbol",
	"MouseSymbol",
	Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol()
{
	if (!Z_Registration_Info_UEnum_MouseSymbol.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MouseSymbol.InnerSingleton, Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_MouseSymbol.InnerSingleton;
}
// End Enum MouseSymbol

// Begin Class ATurnBasedPrototypePlayerController Function GetMouseSymbol
struct Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics
{
	struct TurnBasedPrototypePlayerController_eventGetMouseSymbol_Parms
	{
		MouseSymbol ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Getter" },
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedPrototypePlayerController_eventGetMouseSymbol_Parms, ReturnValue), Z_Construct_UEnum_TurnBasedPrototype_MouseSymbol, METADATA_PARAMS(0, nullptr) }; // 3343283530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnBasedPrototypePlayerController, nullptr, "GetMouseSymbol", nullptr, nullptr, Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::TurnBasedPrototypePlayerController_eventGetMouseSymbol_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::TurnBasedPrototypePlayerController_eventGetMouseSymbol_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedPrototypePlayerController::execGetMouseSymbol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(MouseSymbol*)Z_Param__Result=P_THIS->GetMouseSymbol();
	P_NATIVE_END;
}
// End Class ATurnBasedPrototypePlayerController Function GetMouseSymbol

// Begin Class ATurnBasedPrototypePlayerController
void ATurnBasedPrototypePlayerController::StaticRegisterNativesATurnBasedPrototypePlayerController()
{
	UClass* Class = ATurnBasedPrototypePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMouseSymbol", &ATurnBasedPrototypePlayerController::execGetMouseSymbol },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurnBasedPrototypePlayerController);
UClass* Z_Construct_UClass_ATurnBasedPrototypePlayerController_NoRegister()
{
	return ATurnBasedPrototypePlayerController::StaticClass();
}
struct Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TurnBasedPrototypePlayerController.h" },
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetLeftClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** move to Input Action *///UInputAction* SetDestinationClickAction;\n" },
#endif
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "move to Input Action //UInputAction* SetDestinationClickAction;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetRightClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input action for mouse right click, used for \"more info\", \"interections\" etc*/" },
#endif
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input action for mouse right click, used for \"more info\", \"interections\" etc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionMenuWidget_MetaData[] = {
		{ "Category", "Interaction UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI \n" },
#endif
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionMenuInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedPrototypePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetLeftClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetRightClickAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentInteractionMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractionMenuInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurnBasedPrototypePlayerController_GetMouseSymbol, "GetMouseSymbol" }, // 636642410
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedPrototypePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedPrototypePlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedPrototypePlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedPrototypePlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_SetLeftClickAction = { "SetLeftClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedPrototypePlayerController, SetLeftClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetLeftClickAction_MetaData), NewProp_SetLeftClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_SetRightClickAction = { "SetRightClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedPrototypePlayerController, SetRightClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetRightClickAction_MetaData), NewProp_SetRightClickAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_CurrentInteractionMenuWidget = { "CurrentInteractionMenuWidget", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedPrototypePlayerController, CurrentInteractionMenuWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractionMenuWidget_MetaData), NewProp_CurrentInteractionMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_CurrentInteractionMenuInstance = { "CurrentInteractionMenuInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedPrototypePlayerController, CurrentInteractionMenuInstance), Z_Construct_UClass_UInteractionMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractionMenuInstance_MetaData), NewProp_CurrentInteractionMenuInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_SetLeftClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_SetRightClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_CurrentInteractionMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::NewProp_CurrentInteractionMenuInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::ClassParams = {
	&ATurnBasedPrototypePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurnBasedPrototypePlayerController()
{
	if (!Z_Registration_Info_UClass_ATurnBasedPrototypePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurnBasedPrototypePlayerController.OuterSingleton, Z_Construct_UClass_ATurnBasedPrototypePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurnBasedPrototypePlayerController.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<ATurnBasedPrototypePlayerController>()
{
	return ATurnBasedPrototypePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnBasedPrototypePlayerController);
ATurnBasedPrototypePlayerController::~ATurnBasedPrototypePlayerController() {}
// End Class ATurnBasedPrototypePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ MouseSymbol_StaticEnum, TEXT("MouseSymbol"), &Z_Registration_Info_UEnum_MouseSymbol, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3343283530U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurnBasedPrototypePlayerController, ATurnBasedPrototypePlayerController::StaticClass, TEXT("ATurnBasedPrototypePlayerController"), &Z_Registration_Info_UClass_ATurnBasedPrototypePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnBasedPrototypePlayerController), 2144125136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_129964299(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_TurnBasedPrototypePlayerController_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
