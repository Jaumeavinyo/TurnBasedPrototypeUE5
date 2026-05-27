// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/UI/InteractionMenuItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionMenuItemWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractionMenuItemWidget();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractionMenuItemWidget_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
TURNBASEDPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Delegate FOnInteractionSelected
struct Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics
{
	struct _Script_TurnBasedPrototype_eventOnInteractionSelected_Parms
	{
		EInteractionType InteractionType;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TurnBasedPrototype_eventOnInteractionSelected_Parms, InteractionType), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TurnBasedPrototype_eventOnInteractionSelected_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TurnBasedPrototype, nullptr, "OnInteractionSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::_Script_TurnBasedPrototype_eventOnInteractionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::_Script_TurnBasedPrototype_eventOnInteractionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractionSelected_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionSelected, EInteractionType InteractionType, AActor* Target)
{
	struct _Script_TurnBasedPrototype_eventOnInteractionSelected_Parms
	{
		EInteractionType InteractionType;
		AActor* Target;
	};
	_Script_TurnBasedPrototype_eventOnInteractionSelected_Parms Parms;
	Parms.InteractionType=InteractionType;
	Parms.Target=Target;
	OnInteractionSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractionSelected

// Begin Class UInteractionMenuItemWidget Function ConfigureInteraction
struct Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics
{
	struct InteractionMenuItemWidget_eventConfigureInteraction_Parms
	{
		EInteractionType interactionType;
		AActor* InteractionTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//hay q llamar a esta funcion en algun sitio\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hay q llamar a esta funcion en algun sitio" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_interactionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_interactionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::NewProp_interactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionMenuItemWidget_eventConfigureInteraction_Parms, interactionType), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::NewProp_InteractionTarget = { "InteractionTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionMenuItemWidget_eventConfigureInteraction_Parms, InteractionTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::NewProp_interactionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::NewProp_interactionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::NewProp_InteractionTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionMenuItemWidget, nullptr, "ConfigureInteraction", nullptr, nullptr, Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::InteractionMenuItemWidget_eventConfigureInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::InteractionMenuItemWidget_eventConfigureInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionMenuItemWidget::execConfigureInteraction)
{
	P_GET_ENUM(EInteractionType,Z_Param_interactionType);
	P_GET_OBJECT(AActor,Z_Param_InteractionTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureInteraction(EInteractionType(Z_Param_interactionType),Z_Param_InteractionTarget);
	P_NATIVE_END;
}
// End Class UInteractionMenuItemWidget Function ConfigureInteraction

// Begin Class UInteractionMenuItemWidget Function HandleButtonClicked
struct Z_Construct_UFunction_UInteractionMenuItemWidget_HandleButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionMenuItemWidget_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionMenuItemWidget, nullptr, "HandleButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionMenuItemWidget_HandleButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionMenuItemWidget_HandleButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionMenuItemWidget_HandleButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionMenuItemWidget_HandleButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionMenuItemWidget::execHandleButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleButtonClicked();
	P_NATIVE_END;
}
// End Class UInteractionMenuItemWidget Function HandleButtonClicked

// Begin Class UInteractionMenuItemWidget
void UInteractionMenuItemWidget::StaticRegisterNativesUInteractionMenuItemWidget()
{
	UClass* Class = UInteractionMenuItemWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureInteraction", &UInteractionMenuItemWidget::execConfigureInteraction },
		{ "HandleButtonClicked", &UInteractionMenuItemWidget::execHandleButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionMenuItemWidget);
UClass* Z_Construct_UClass_UInteractionMenuItemWidget_NoRegister()
{
	return UInteractionMenuItemWidget::StaticClass();
}
struct Z_Construct_UClass_UInteractionMenuItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//for parent menu\n" },
#endif
		{ "IncludePath", "UI/InteractionMenuItemWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for parent menu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionSelected_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InteractionMenuItemWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//old interactionButton\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "old interactionButton" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
		{ "Category", "InteractionMenuItemWidget" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionType_MetaData[] = {
		{ "Category", "InteractionMenuItemWidget" },
		{ "ModuleRelativePath", "Public/UI/InteractionMenuItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedButton;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInteractionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionMenuItemWidget_ConfigureInteraction, "ConfigureInteraction" }, // 829514244
		{ &Z_Construct_UFunction_UInteractionMenuItemWidget_HandleButtonClicked, "HandleButtonClicked" }, // 958162144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionMenuItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_OnInteractionSelected = { "OnInteractionSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionMenuItemWidget, OnInteractionSelected), Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionSelected_MetaData), NewProp_OnInteractionSelected_MetaData) }; // 2604554035
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_LinkedButton = { "LinkedButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionMenuItemWidget, LinkedButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedButton_MetaData), NewProp_LinkedButton_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionMenuItemWidget, InteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionText_MetaData), NewProp_InteractionText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_CurrentInteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_CurrentInteractionType = { "CurrentInteractionType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionMenuItemWidget, CurrentInteractionType), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractionType_MetaData), NewProp_CurrentInteractionType_MetaData) }; // 1346780968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionMenuItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_OnInteractionSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_LinkedButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_InteractionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_CurrentInteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenuItemWidget_Statics::NewProp_CurrentInteractionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuItemWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionMenuItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionMenuItemWidget_Statics::ClassParams = {
	&UInteractionMenuItemWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionMenuItemWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuItemWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenuItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionMenuItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionMenuItemWidget()
{
	if (!Z_Registration_Info_UClass_UInteractionMenuItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionMenuItemWidget.OuterSingleton, Z_Construct_UClass_UInteractionMenuItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionMenuItemWidget.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UInteractionMenuItemWidget>()
{
	return UInteractionMenuItemWidget::StaticClass();
}
UInteractionMenuItemWidget::UInteractionMenuItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionMenuItemWidget);
UInteractionMenuItemWidget::~UInteractionMenuItemWidget() {}
// End Class UInteractionMenuItemWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionMenuItemWidget, UInteractionMenuItemWidget::StaticClass, TEXT("UInteractionMenuItemWidget"), &Z_Registration_Info_UClass_UInteractionMenuItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionMenuItemWidget), 1411677366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_132982049(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
