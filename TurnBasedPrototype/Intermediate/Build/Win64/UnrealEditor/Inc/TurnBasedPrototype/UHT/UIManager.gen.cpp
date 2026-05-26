// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/UI/UIManager.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UUIManager();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UUIManager_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class UUIManager Function HideAvailableInteractionsMenu
struct Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics
{
	struct UIManager_eventHideAvailableInteractionsMenu_Parms
	{
		AActor* Target;
		TArray<EInteractionType> Interactions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Interactions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventHideAvailableInteractionsMenu_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner = { "Interactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Interactions = { "Interactions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventHideAvailableInteractionsMenu_Parms, Interactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactions_MetaData), NewProp_Interactions_MetaData) }; // 1346780968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::NewProp_Interactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "HideAvailableInteractionsMenu", nullptr, nullptr, Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::UIManager_eventHideAvailableInteractionsMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::UIManager_eventHideAvailableInteractionsMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execHideAvailableInteractionsMenu)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_TARRAY_REF(EInteractionType,Z_Param_Out_Interactions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideAvailableInteractionsMenu(Z_Param_Target,Z_Param_Out_Interactions);
	P_NATIVE_END;
}
// End Class UUIManager Function HideAvailableInteractionsMenu

// Begin Class UUIManager Function OnInteractionSelected
struct Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics
{
	struct UIManager_eventOnInteractionSelected_Parms
	{
		EInteractionType InteractionType;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/UIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventOnInteractionSelected_Parms, InteractionType), Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventOnInteractionSelected_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "OnInteractionSelected", nullptr, nullptr, Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::UIManager_eventOnInteractionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::UIManager_eventOnInteractionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_OnInteractionSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_OnInteractionSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execOnInteractionSelected)
{
	P_GET_ENUM(EInteractionType,Z_Param_InteractionType);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionSelected(EInteractionType(Z_Param_InteractionType),Z_Param_Target);
	P_NATIVE_END;
}
// End Class UUIManager Function OnInteractionSelected

// Begin Class UUIManager Function ShowAvailableInteractionsMenu
struct Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics
{
	struct UIManager_eventShowAvailableInteractionsMenu_Parms
	{
		AActor* Target;
		TArray<EInteractionType> Interactions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Interactions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventShowAvailableInteractionsMenu_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner = { "Interactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1346780968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Interactions = { "Interactions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventShowAvailableInteractionsMenu_Parms, Interactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactions_MetaData), NewProp_Interactions_MetaData) }; // 1346780968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Interactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::NewProp_Interactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "ShowAvailableInteractionsMenu", nullptr, nullptr, Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::UIManager_eventShowAvailableInteractionsMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::UIManager_eventShowAvailableInteractionsMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execShowAvailableInteractionsMenu)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_TARRAY_REF(EInteractionType,Z_Param_Out_Interactions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAvailableInteractionsMenu(Z_Param_Target,Z_Param_Out_Interactions);
	P_NATIVE_END;
}
// End Class UUIManager Function ShowAvailableInteractionsMenu

// Begin Class UUIManager
void UUIManager::StaticRegisterNativesUUIManager()
{
	UClass* Class = UUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideAvailableInteractionsMenu", &UUIManager::execHideAvailableInteractionsMenu },
		{ "OnInteractionSelected", &UUIManager::execOnInteractionSelected },
		{ "ShowAvailableInteractionsMenu", &UUIManager::execShowAvailableInteractionsMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIManager);
UClass* Z_Construct_UClass_UUIManager_NoRegister()
{
	return UUIManager::StaticClass();
}
struct Z_Construct_UClass_UUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  PLAYER SUBSYSTEM\n *  MyPlayerSubsystem* MySubsystem = LocalPlayer->GetSubsystem<UMyPlayerSubsystem>();\n *\x09\n *\x09GAMEINSTANCESUBSYSTEM\n *\x09UGameInstanceSubsystem* MySubsystem = GetGameInstance()->GetSubsystem<UGameInstanceSubsystem>();\n *\n *\n *\n *\n *  \n */" },
#endif
		{ "IncludePath", "UI/UIManager.h" },
		{ "ModuleRelativePath", "Public/UI/UIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PLAYER SUBSYSTEM\nMyPlayerSubsystem* MySubsystem = LocalPlayer->GetSubsystem<UMyPlayerSubsystem>();\n\n   GAMEINSTANCESUBSYSTEM\n   UGameInstanceSubsystem* MySubsystem = GetGameInstance()->GetSubsystem<UGameInstanceSubsystem>();" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableInteractionsMenuWidgetClass_MetaData[] = {
		{ "Category", "UI Classes" },
		{ "ModuleRelativePath", "Public/UI/UIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/UIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AvailableInteractionsMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActiveWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIManager_HideAvailableInteractionsMenu, "HideAvailableInteractionsMenu" }, // 652911638
		{ &Z_Construct_UFunction_UUIManager_OnInteractionSelected, "OnInteractionSelected" }, // 18412905
		{ &Z_Construct_UFunction_UUIManager_ShowAvailableInteractionsMenu, "ShowAvailableInteractionsMenu" }, // 3647185433
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIManager_Statics::NewProp_AvailableInteractionsMenuWidgetClass = { "AvailableInteractionsMenuWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManager, AvailableInteractionsMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableInteractionsMenuWidgetClass_MetaData), NewProp_AvailableInteractionsMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManager_Statics::NewProp_CurrentActiveWidget = { "CurrentActiveWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManager, CurrentActiveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveWidget_MetaData), NewProp_CurrentActiveWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManager_Statics::NewProp_AvailableInteractionsMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManager_Statics::NewProp_CurrentActiveWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIManager_Statics::ClassParams = {
	&UUIManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIManager()
{
	if (!Z_Registration_Info_UClass_UUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIManager.OuterSingleton, Z_Construct_UClass_UUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIManager.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<UUIManager>()
{
	return UUIManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIManager);
UUIManager::~UUIManager() {}
// End Class UUIManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIManager, UUIManager::StaticClass, TEXT("UUIManager"), &Z_Registration_Info_UClass_UUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIManager), 2246376867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_3785535470(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_UIManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
