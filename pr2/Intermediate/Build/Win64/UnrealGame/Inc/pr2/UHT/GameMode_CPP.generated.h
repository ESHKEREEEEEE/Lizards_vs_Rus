// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode_CPP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameMode_CPP;
#ifdef PR2_GameMode_CPP_generated_h
#error "GameMode_CPP.generated.h already included, missing '#pragma once' in GameMode_CPP.h"
#endif
#define PR2_GameMode_CPP_generated_h

#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMyGetGameMode); \
	DECLARE_FUNCTION(execNachinaem);


#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameMode_CPP(); \
	friend struct Z_Construct_UClass_AGameMode_CPP_Statics; \
public: \
	DECLARE_CLASS(AGameMode_CPP, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/pr2"), NO_API) \
	DECLARE_SERIALIZER(AGameMode_CPP)


#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameMode_CPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameMode_CPP(AGameMode_CPP&&); \
	AGameMode_CPP(const AGameMode_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameMode_CPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMode_CPP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameMode_CPP) \
	NO_API virtual ~AGameMode_CPP();


#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_13_PROLOG
#define FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PR2_API UClass* StaticClass<class AGameMode_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
