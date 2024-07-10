// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/BTTask_SetEnemy_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetEnemy_CPP() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
PR2_API UClass* Z_Construct_UClass_UBTTask_SetEnemy_CPP();
PR2_API UClass* Z_Construct_UClass_UBTTask_SetEnemy_CPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class UBTTask_SetEnemy_CPP
void UBTTask_SetEnemy_CPP::StaticRegisterNativesUBTTask_SetEnemy_CPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetEnemy_CPP);
UClass* Z_Construct_UClass_UBTTask_SetEnemy_CPP_NoRegister()
{
	return UBTTask_SetEnemy_CPP::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetEnemy_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetEnemy_CPP.h" },
		{ "ModuleRelativePath", "Public/BTTask_SetEnemy_CPP.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetEnemy_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_SetEnemy_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetEnemy_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetEnemy_CPP_Statics::ClassParams = {
	&UBTTask_SetEnemy_CPP::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetEnemy_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetEnemy_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetEnemy_CPP()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetEnemy_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetEnemy_CPP.OuterSingleton, Z_Construct_UClass_UBTTask_SetEnemy_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetEnemy_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<UBTTask_SetEnemy_CPP>()
{
	return UBTTask_SetEnemy_CPP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetEnemy_CPP);
UBTTask_SetEnemy_CPP::~UBTTask_SetEnemy_CPP() {}
// End Class UBTTask_SetEnemy_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_SetEnemy_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetEnemy_CPP, UBTTask_SetEnemy_CPP::StaticClass, TEXT("UBTTask_SetEnemy_CPP"), &Z_Registration_Info_UClass_UBTTask_SetEnemy_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetEnemy_CPP), 954783967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_SetEnemy_CPP_h_3863774067(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_SetEnemy_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_SetEnemy_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
