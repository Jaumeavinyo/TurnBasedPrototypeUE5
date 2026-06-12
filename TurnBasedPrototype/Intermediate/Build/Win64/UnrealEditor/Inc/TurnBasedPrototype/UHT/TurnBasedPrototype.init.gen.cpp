// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedPrototype_init() {}
	TURNBASEDPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature();
	TURNBASEDPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TurnBasedPrototype;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TurnBasedPrototype()
	{
		if (!Z_Registration_Info_UPackage__Script_TurnBasedPrototype.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TurnBasedPrototype_OnInteractionSelected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TurnBasedPrototype_OnMenuInteractionSelected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TurnBasedPrototype",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x133A7CCF,
				0x568A0813,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TurnBasedPrototype.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TurnBasedPrototype.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TurnBasedPrototype(Z_Construct_UPackage__Script_TurnBasedPrototype, TEXT("/Script/TurnBasedPrototype"), Z_Registration_Info_UPackage__Script_TurnBasedPrototype, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x133A7CCF, 0x568A0813));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
