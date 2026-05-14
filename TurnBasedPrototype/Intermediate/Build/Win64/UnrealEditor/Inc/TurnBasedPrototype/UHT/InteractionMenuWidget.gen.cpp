// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/UI/InteractionMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionMenuWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractionMenuItemWidget_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractionMenuWidget();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractionMenuWidget_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
TURNBASEDPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Delegate FOnMenuInteractionSelected
struct Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics
{
	struct _Script_TurnBasedPrototype_eventOnMenuInteractionSelected_Parms
	{
		EInteractionType InteractionType;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TurnBasedPrototype_eventOnMenuInteractionSelected_Parms, InteractionType), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TurnBasedPrototype_eventOnMenuInteractionSelected_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype, nullptr, "OnMenuInteractionSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::_Script_TurnBasedPrototype_eventOnMenuInteractionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::_Script_TurnBasedPrototype_eventOnMenuInteractionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuInteractionSelected_DelegateWrapper(const FMulticastScriptDelegate& OnMenuInteractionSelected, EInteractionType InteractionType, AActor* Target)
{
	struct _Script_TurnBasedPrototype_eventOnMenuInteractionSelected_Parms
	{
		EInteractionType InteractionType;
		AActor* Target;
	};
	_Script_TurnBasedPrototype_eventOnMenuInteractionSelected_Parms Parms;
	Parms.InteractionType=InteractionType;
	Parms.Target=Target;
	OnMenuInteractionSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMenuInteractionSelected

// Begin Class UInteractionMenuWidget Function CloseMenu
struct Z_Construct_UFunction_UInteractionMenuWidget_CloseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//called when click outside menu\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when click outside menu" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionMenuWidget_CloseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionMenuWidget, nullptr, "CloseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuWidget_CloseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionMenuWidget_CloseMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionMenuWidget_CloseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionMenuWidget_CloseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionMenuWidget::execCloseMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseMenu();
	P_NATIVE_END;
}
// End Class UInteractionMenuWidget Function CloseMenu

// Begin Class UInteractionMenuWidget Function OnItemSelected
struct Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics
{
	struct InteractionMenuWidget_eventOnItemSelected_Parms
	{
		EInteractionType InteractionType;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionMenuWidget_eventOnItemSelected_Parms, InteractionType), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionMenuWidget_eventOnItemSelected_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionMenuWidget, nullptr, "OnItemSelected", nullptr, nullptr, Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::InteractionMenuWidget_eventOnItemSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::InteractionMenuWidget_eventOnItemSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionMenuWidget::execOnItemSelected)
{
	P_GET_ENUM(EInteractionType,Z_Param_InteractionType);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemSelected(EInteractionType(Z_Param_InteractionType),Z_Param_Target);
	P_NATIVE_END;
}
// End Class UInteractionMenuWidget Function OnItemSelected

// Begin Class UInteractionMenuWidget Function PopulateMenu
struct Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics
{
	struct InteractionMenuWidget_eventPopulateMenu_Parms
	{
		AActor* InTarget;
		TArray<EInteractionType> Interactions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Interactions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_InTarget = { "InTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionMenuWidget_eventPopulateMenu_Parms, InTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_Interactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_Interactions_Inner = { "Interactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_Interactions = { "Interactions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionMenuWidget_eventPopulateMenu_Parms, Interactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactions_MetaData), NewProp_Interactions_MetaData) }; // 1346780968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_InTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_Interactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_Interactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::NewProp_Interactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionMenuWidget, nullptr, "PopulateMenu", nullptr, nullptr, Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::InteractionMenuWidget_eventPopulateMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::InteractionMenuWidget_eventPopulateMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionMenuWidget::execPopulateMenu)
{
	P_GET_OBJECT(AActor,Z_Param_InTarget);
	P_GET_TARRAY_REF(EInteractionType,Z_Param_Out_Interactions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopulateMenu(Z_Param_InTarget,Z_Param_Out_Interactions);
	P_NATIVE_END;
}
// End Class UInteractionMenuWidget Function PopulateMenu

// Begin Class UInteractionMenuWidget
void UInteractionMenuWidget::StaticRegisterNativesUInteractionMenuWidget()
{
	UClass* Class = UInteractionMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseMenu", &UInteractionMenuWidget::execCloseMenu },
		{ "OnItemSelected", &UInteractionMenuWidget::execOnItemSelected },
		{ "PopulateMenu", &UInteractionMenuWidget::execPopulateMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionMenuWidget);
UClass* Z_Construct_UClass_UInteractionMenuWidget_NoRegister()
{
	return UInteractionMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UInteractionMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tu tell UI manager wich interaction was selected\n" },
#endif
		{ "IncludePath", "UI/InteractionMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tu tell UI manager wich interaction was selected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionSelected_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionsMenuPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuItemWidgetClass_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionsMenuPanel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuItemWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionMenuWidget_CloseMenu, "CloseMenu" }, // 3462815147
		{ &Z_Construct_UFunction_UInteractionMenuWidget_OnItemSelected, "OnItemSelected" }, // 3508557120
		{ &Z_Construct_UFunction_UInteractionMenuWidget_PopulateMenu, "PopulateMenu" }, // 3790305954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionMenuWidget_Statics::NewProp_OnInteractionSelected = { "OnInteractionSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionMenuWidget, OnInteractionSelected), Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionSelected_MetaData), NewProp_OnInteractionSelected_MetaData) }; // 1193862256
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionMenuWidget_Statics::NewProp_InteractionsMenuPanel = { "InteractionsMenuPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionMenuWidget, InteractionsMenuPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionsMenuPanel_MetaData), NewProp_InteractionsMenuPanel_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionMenuWidget_Statics::NewProp_MenuItemWidgetClass = { "MenuItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionMenuWidget, MenuItemWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionMenuItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuItemWidgetClass_MetaData), NewProp_MenuItemWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuWidget_Statics::NewProp_OnInteractionSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuWidget_Statics::NewProp_InteractionsMenuPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuWidget_Statics::NewProp_MenuItemWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionMenuWidget_Statics::ClassParams = {
	&UInteractionMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionMenuWidget()
{
	if (!Z_Registration_Info_UClass_UInteractionMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionMenuWidget.OuterSingleton, Z_Construct_UClass_UInteractionMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionMenuWidget.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UInteractionMenuWidget>()
{
	return UInteractionMenuWidget::StaticClass();
}
UInteractionMenuWidget::UInteractionMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionMenuWidget);
UInteractionMenuWidget::~UInteractionMenuWidget() {}
// End Class UInteractionMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionMenuWidget, UInteractionMenuWidget::StaticClass, TEXT("UInteractionMenuWidget"), &Z_Registration_Info_UClass_UInteractionMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionMenuWidget), 2371925611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuWidget_h_3368564647(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
