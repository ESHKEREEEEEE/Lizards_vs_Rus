// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/AnimInstance_Unit_CPP.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstance_Unit_CPP() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PR2_API UClass* Z_Construct_UClass_UAnimInstance_Unit_CPP();
PR2_API UClass* Z_Construct_UClass_UAnimInstance_Unit_CPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class UAnimInstance_Unit_CPP
void UAnimInstance_Unit_CPP::StaticRegisterNativesUAnimInstance_Unit_CPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimInstance_Unit_CPP);
UClass* Z_Construct_UClass_UAnimInstance_Unit_CPP_NoRegister()
{
	return UAnimInstance_Unit_CPP::StaticClass();
}
struct Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstance_Unit_CPP.h" },
		{ "ModuleRelativePath", "Public/AnimInstance_Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isRunning_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AnimInstance_Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDeadAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AnimInstance_Unit_CPP.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isRunning;
	static void NewProp_isDeadAnim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDeadAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstance_Unit_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isRunning_SetBit(void* Obj)
{
	((UAnimInstance_Unit_CPP*)Obj)->isRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isRunning = { "isRunning", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstance_Unit_CPP), &Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isRunning_MetaData), NewProp_isRunning_MetaData) };
void Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isDeadAnim_SetBit(void* Obj)
{
	((UAnimInstance_Unit_CPP*)Obj)->isDeadAnim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isDeadAnim = { "isDeadAnim", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstance_Unit_CPP), &Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isDeadAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDeadAnim_MetaData), NewProp_isDeadAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::NewProp_isDeadAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::ClassParams = {
	&UAnimInstance_Unit_CPP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimInstance_Unit_CPP()
{
	if (!Z_Registration_Info_UClass_UAnimInstance_Unit_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimInstance_Unit_CPP.OuterSingleton, Z_Construct_UClass_UAnimInstance_Unit_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimInstance_Unit_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<UAnimInstance_Unit_CPP>()
{
	return UAnimInstance_Unit_CPP::StaticClass();
}
UAnimInstance_Unit_CPP::UAnimInstance_Unit_CPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstance_Unit_CPP);
UAnimInstance_Unit_CPP::~UAnimInstance_Unit_CPP() {}
// End Class UAnimInstance_Unit_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AnimInstance_Unit_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimInstance_Unit_CPP, UAnimInstance_Unit_CPP::StaticClass, TEXT("UAnimInstance_Unit_CPP"), &Z_Registration_Info_UClass_UAnimInstance_Unit_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimInstance_Unit_CPP), 1879303608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AnimInstance_Unit_CPP_h_2630358497(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AnimInstance_Unit_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AnimInstance_Unit_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
