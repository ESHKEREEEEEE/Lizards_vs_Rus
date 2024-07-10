// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/AIC_Unit_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIC_Unit_CPP() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
PR2_API UClass* Z_Construct_UClass_AAIC_Unit_CPP();
PR2_API UClass* Z_Construct_UClass_AAIC_Unit_CPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class AAIC_Unit_CPP
void AAIC_Unit_CPP::StaticRegisterNativesAAIC_Unit_CPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIC_Unit_CPP);
UClass* Z_Construct_UClass_AAIC_Unit_CPP_NoRegister()
{
	return AAIC_Unit_CPP::StaticClass();
}
struct Z_Construct_UClass_AAIC_Unit_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIC_Unit_CPP.h" },
		{ "ModuleRelativePath", "Public/AIC_Unit_CPP.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIC_Unit_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIC_Unit_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Unit_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIC_Unit_CPP_Statics::ClassParams = {
	&AAIC_Unit_CPP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Unit_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIC_Unit_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIC_Unit_CPP()
{
	if (!Z_Registration_Info_UClass_AAIC_Unit_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIC_Unit_CPP.OuterSingleton, Z_Construct_UClass_AAIC_Unit_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIC_Unit_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<AAIC_Unit_CPP>()
{
	return AAIC_Unit_CPP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIC_Unit_CPP);
AAIC_Unit_CPP::~AAIC_Unit_CPP() {}
// End Class AAIC_Unit_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AIC_Unit_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIC_Unit_CPP, AAIC_Unit_CPP::StaticClass, TEXT("AAIC_Unit_CPP"), &Z_Registration_Info_UClass_AAIC_Unit_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIC_Unit_CPP), 2013636177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AIC_Unit_CPP_h_332112134(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AIC_Unit_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_AIC_Unit_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
