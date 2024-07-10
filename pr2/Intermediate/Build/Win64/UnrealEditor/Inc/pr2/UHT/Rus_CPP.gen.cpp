// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/Rus_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRus_CPP() {}

// Begin Cross Module References
PR2_API UClass* Z_Construct_UClass_ARus_CPP();
PR2_API UClass* Z_Construct_UClass_ARus_CPP_NoRegister();
PR2_API UClass* Z_Construct_UClass_AUnit_CPP();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class ARus_CPP
void ARus_CPP::StaticRegisterNativesARus_CPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARus_CPP);
UClass* Z_Construct_UClass_ARus_CPP_NoRegister()
{
	return ARus_CPP::StaticClass();
}
struct Z_Construct_UClass_ARus_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Rus_CPP.h" },
		{ "ModuleRelativePath", "Public/Rus_CPP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARus_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARus_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AUnit_CPP,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARus_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARus_CPP_Statics::ClassParams = {
	&ARus_CPP::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARus_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_ARus_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARus_CPP()
{
	if (!Z_Registration_Info_UClass_ARus_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARus_CPP.OuterSingleton, Z_Construct_UClass_ARus_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARus_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<ARus_CPP>()
{
	return ARus_CPP::StaticClass();
}
ARus_CPP::ARus_CPP() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARus_CPP);
ARus_CPP::~ARus_CPP() {}
// End Class ARus_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Rus_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARus_CPP, ARus_CPP::StaticClass, TEXT("ARus_CPP"), &Z_Registration_Info_UClass_ARus_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARus_CPP), 2380191919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Rus_CPP_h_1829651903(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Rus_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Rus_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
