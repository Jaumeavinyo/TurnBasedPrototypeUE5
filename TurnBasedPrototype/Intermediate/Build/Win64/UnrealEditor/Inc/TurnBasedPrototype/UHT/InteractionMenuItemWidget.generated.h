// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/InteractionMenuItemWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EInteractionType : uint8;
#ifdef TURNBASEDPROTOTYPE_InteractionMenuItemWidget_generated_h
#error "InteractionMenuItemWidget.generated.h already included, missing '#pragma once' in InteractionMenuItemWidget.h"
#endif
#define TURNBASEDPROTOTYPE_InteractionMenuItemWidget_generated_h

#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_14_DELEGATE \
TURNBASEDPROTOTYPE_API void FOnInteractionSelected_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionSelected, EInteractionType InteractionType, AActor* Target);


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleButtonClicked); \
	DECLARE_FUNCTION(execConfigureInteraction);


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionMenuItemWidget(); \
	friend struct Z_Construct_UClass_UInteractionMenuItemWidget_Statics; \
public: \
	DECLARE_CLASS(UInteractionMenuItemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedPrototype"), NO_API) \
	DECLARE_SERIALIZER(UInteractionMenuItemWidget)


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionMenuItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionMenuItemWidget(UInteractionMenuItemWidget&&); \
	UInteractionMenuItemWidget(const UInteractionMenuItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionMenuItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionMenuItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionMenuItemWidget) \
	NO_API virtual ~UInteractionMenuItemWidget();


#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_16_PROLOG
#define FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROTOTYPE_API UClass* StaticClass<class UInteractionMenuItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_TurnBasedPrototypeUE5_TurnBasedPrototype_Source_TurnBasedPrototype_Public_UI_InteractionMenuItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
