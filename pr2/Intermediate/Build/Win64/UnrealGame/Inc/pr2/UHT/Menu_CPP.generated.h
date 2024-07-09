// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Menu_CPP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PR2_Menu_CPP_generated_h
#error "Menu_CPP.generated.h already included, missing '#pragma once' in Menu_CPP.h"
#endif
#define PR2_Menu_CPP_generated_h

#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLizSliderValueChanged); \
	DECLARE_FUNCTION(execOnRusSliderValueChanged); \
	DECLARE_FUNCTION(execOnButtonGoClicked);


#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenu_CPP(); \
	friend struct Z_Construct_UClass_UMenu_CPP_Statics; \
public: \
	DECLARE_CLASS(UMenu_CPP, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/pr2"), NO_API) \
	DECLARE_SERIALIZER(UMenu_CPP)


#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenu_CPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMenu_CPP(UMenu_CPP&&); \
	UMenu_CPP(const UMenu_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenu_CPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenu_CPP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenu_CPP) \
	NO_API virtual ~UMenu_CPP();


#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_15_PROLOG
#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PR2_API UClass* StaticClass<class UMenu_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
