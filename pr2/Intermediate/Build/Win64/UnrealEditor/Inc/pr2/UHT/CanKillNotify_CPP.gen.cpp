// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/CanKillNotify_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanKillNotify_CPP() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PR2_API UClass* Z_Construct_UClass_UCanKillNotify_CPP();
PR2_API UClass* Z_Construct_UClass_UCanKillNotify_CPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class UCanKillNotify_CPP
void UCanKillNotify_CPP::StaticRegisterNativesUCanKillNotify_CPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanKillNotify_CPP);
UClass* Z_Construct_UClass_UCanKillNotify_CPP_NoRegister()
{
	return UCanKillNotify_CPP::StaticClass();
}
struct Z_Construct_UClass_UCanKillNotify_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "CanKillNotify_CPP.h" },
		{ "ModuleRelativePath", "Public/CanKillNotify_CPP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanKillNotify_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCanKillNotify_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanKillNotify_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanKillNotify_CPP_Statics::ClassParams = {
	&UCanKillNotify_CPP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanKillNotify_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanKillNotify_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanKillNotify_CPP()
{
	if (!Z_Registration_Info_UClass_UCanKillNotify_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanKillNotify_CPP.OuterSingleton, Z_Construct_UClass_UCanKillNotify_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanKillNotify_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<UCanKillNotify_CPP>()
{
	return UCanKillNotify_CPP::StaticClass();
}
UCanKillNotify_CPP::UCanKillNotify_CPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanKillNotify_CPP);
UCanKillNotify_CPP::~UCanKillNotify_CPP() {}
// End Class UCanKillNotify_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_CanKillNotify_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanKillNotify_CPP, UCanKillNotify_CPP::StaticClass, TEXT("UCanKillNotify_CPP"), &Z_Registration_Info_UClass_UCanKillNotify_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanKillNotify_CPP), 1191625097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_CanKillNotify_CPP_h_2185904295(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_CanKillNotify_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_CanKillNotify_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
