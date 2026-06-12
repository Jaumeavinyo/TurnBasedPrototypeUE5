// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPrototype/Public/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacter();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
TURNBASEDPROTOTYPE_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype();
// End Cross Module References

// Begin Class ABaseCharacter Function DrawWeapon
struct Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics
{
	struct BaseCharacter_eventDrawWeapon_Parms
	{
		FName socket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//calls character to play the anim to hold saved weapon. after, an anim notify calls SetCurrentSocket(FName name) in the right moment\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "calls character to play the anim to hold saved weapon. after, an anim notify calls SetCurrentSocket(FName name) in the right moment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventDrawWeapon_Parms, socket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::NewProp_socket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "DrawWeapon", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::BaseCharacter_eventDrawWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::BaseCharacter_eventDrawWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_DrawWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_DrawWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execDrawWeapon)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_socket);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawWeapon(Z_Param_socket);
	P_NATIVE_END;
}
// End Class ABaseCharacter Function DrawWeapon

// Begin Class ABaseCharacter Function SheatheWeapon
struct Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics
{
	struct BaseCharacter_eventSheatheWeapon_Parms
	{
		FName socket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//calls character to play the anim to save weapon. after, an anim notify calls SetCurrentSocket(FName name) in the right moment\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "calls character to play the anim to save weapon. after, an anim notify calls SetCurrentSocket(FName name) in the right moment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventSheatheWeapon_Parms, socket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::NewProp_socket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "SheatheWeapon", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::BaseCharacter_eventSheatheWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::BaseCharacter_eventSheatheWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_SheatheWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_SheatheWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execSheatheWeapon)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_socket);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SheatheWeapon(Z_Param_socket);
	P_NATIVE_END;
}
// End Class ABaseCharacter Function SheatheWeapon

// Begin Class ABaseCharacter
void ABaseCharacter::StaticRegisterNativesABaseCharacter()
{
	UClass* Class = ABaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawWeapon", &ABaseCharacter::execDrawWeapon },
		{ "SheatheWeapon", &ABaseCharacter::execSheatheWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
{
	return ABaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponComponent_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WEAPON SYSTEM\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WEAPON SYSTEM" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponDrawed_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponSheathed_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxInteractionDistance_MetaData[] = {
		{ "Category", "Interaction System" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponComponent;
	static void NewProp_bWeaponDrawed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponDrawed;
	static void NewProp_bWeaponSheathed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponSheathed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxInteractionDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_DrawWeapon, "DrawWeapon" }, // 384039937
		{ &Z_Construct_UFunction_ABaseCharacter_SheatheWeapon, "SheatheWeapon" }, // 2399462142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_WeaponComponent = { "WeaponComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, WeaponComponent), Z_Construct_UClass_UWeaponComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponComponent_MetaData), NewProp_WeaponComponent_MetaData) };
void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponDrawed_SetBit(void* Obj)
{
	((ABaseCharacter*)Obj)->bWeaponDrawed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponDrawed = { "bWeaponDrawed", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponDrawed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponDrawed_MetaData), NewProp_bWeaponDrawed_MetaData) };
void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponSheathed_SetBit(void* Obj)
{
	((ABaseCharacter*)Obj)->bWeaponSheathed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponSheathed = { "bWeaponSheathed", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponSheathed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponSheathed_MetaData), NewProp_bWeaponSheathed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_maxInteractionDistance = { "maxInteractionDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, maxInteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxInteractionDistance_MetaData), NewProp_maxInteractionDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_WeaponComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponDrawed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bWeaponSheathed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_maxInteractionDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
	&ABaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<ABaseCharacter>()
{
	return ABaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// End Class ABaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 751777866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseCharacter_h_3001178782(TEXT("/Script/TurnBasedPrototype"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_BaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
