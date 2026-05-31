// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/Chest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_AChest();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_AChest_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UChestDataAsset_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
TURNBASEDPROTOTYPE_API UEnum* Z_Construct_UEnum_TurnBasedPrototype_EInteractionType();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class AChest Function GetSupportedInteractions
struct Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics
{
	struct Chest_eventGetSupportedInteractions_Parms
	{
		TArray<EInteractionType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "interactions" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TurnBasedPrototype_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 821326794
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Chest_eventGetSupportedInteractions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 821326794
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChest, nullptr, "GetSupportedInteractions", nullptr, nullptr, Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::Chest_eventGetSupportedInteractions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::Chest_eventGetSupportedInteractions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChest_GetSupportedInteractions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChest_GetSupportedInteractions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChest::execGetSupportedInteractions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EInteractionType>*)Z_Param__Result=P_THIS->GetSupportedInteractions();
	P_NATIVE_END;
}
// End Class AChest Function GetSupportedInteractions

// Begin Class AChest Function OnChestOpenOrder
static const FName NAME_AChest_OnChestOpenOrder = FName(TEXT("OnChestOpenOrder"));
void AChest::OnChestOpenOrder()
{
	UFunction* Func = FindFunctionChecked(NAME_AChest_OnChestOpenOrder);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AChest_OnChestOpenOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChest_OnChestOpenOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChest, nullptr, "OnChestOpenOrder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChest_OnChestOpenOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChest_OnChestOpenOrder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChest_OnChestOpenOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChest_OnChestOpenOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AChest Function OnChestOpenOrder

// Begin Class AChest
void AChest::StaticRegisterNativesAChest()
{
	UClass* Class = AChest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSupportedInteractions", &AChest::execGetSupportedInteractions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChest);
UClass* Z_Construct_UClass_AChest_NoRegister()
{
	return AChest::StaticClass();
}
struct Z_Construct_UClass_AChest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Chest.h" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Chest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This function is called by UI to show player interaction options when selecting an npc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is called by UI to show player interaction options when selecting an npc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChestMesh_MetaData[] = {
		{ "Category", "ChestMesh" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChestMeshComponent_MetaData[] = {
		{ "Category", "ChestMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprintClass_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChestData_MetaData[] = {
		{ "Category", "Chest Data" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_openChestAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_closeChestAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Chest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChestMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChestMeshComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimationBlueprintClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChestData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_openChestAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_closeChestAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChest_GetSupportedInteractions, "GetSupportedInteractions" }, // 1775367166
		{ &Z_Construct_UFunction_AChest_OnChestOpenOrder, "OnChestOpenOrder" }, // 3920336921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AChest_Statics::NewProp_bIsOpen_SetBit(void* Obj)
{
	((AChest*)Obj)->bIsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChest), &Z_Construct_UClass_AChest_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOpen_MetaData), NewProp_bIsOpen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_ChestMesh = { "ChestMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, ChestMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChestMesh_MetaData), NewProp_ChestMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_ChestMeshComponent = { "ChestMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, ChestMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChestMeshComponent_MetaData), NewProp_ChestMeshComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_AnimationBlueprintClass = { "AnimationBlueprintClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, AnimationBlueprintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationBlueprintClass_MetaData), NewProp_AnimationBlueprintClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_ChestData = { "ChestData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, ChestData), Z_Construct_UClass_UChestDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChestData_MetaData), NewProp_ChestData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_openChestAnim = { "openChestAnim", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, openChestAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_openChestAnim_MetaData), NewProp_openChestAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_closeChestAnim = { "closeChestAnim", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChest, closeChestAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_closeChestAnim_MetaData), NewProp_closeChestAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_bIsOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_ChestMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_ChestMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_AnimationBlueprintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_ChestData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_openChestAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_closeChestAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChest_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AChest, IInteractable), false },  // 1148941949
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChest_Statics::ClassParams = {
	&AChest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChest_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::Class_MetaDataParams), Z_Construct_UClass_AChest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChest()
{
	if (!Z_Registration_Info_UClass_AChest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChest.OuterSingleton, Z_Construct_UClass_AChest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChest.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<AChest>()
{
	return AChest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChest);
AChest::~AChest() {}
// End Class AChest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChest, AChest::StaticClass, TEXT("AChest"), &Z_Registration_Info_UClass_AChest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChest), 409932273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_3904851194(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_Chest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
