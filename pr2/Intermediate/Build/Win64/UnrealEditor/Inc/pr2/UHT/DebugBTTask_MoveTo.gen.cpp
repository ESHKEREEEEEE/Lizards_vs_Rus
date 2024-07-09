// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/DebugBTTask_MoveTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugBTTask_MoveTo() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
PR2_API UClass* Z_Construct_UClass_UDebugBTTask_MoveTo();
PR2_API UClass* Z_Construct_UClass_UDebugBTTask_MoveTo_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class UDebugBTTask_MoveTo
void UDebugBTTask_MoveTo::StaticRegisterNativesUDebugBTTask_MoveTo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugBTTask_MoveTo);
UClass* Z_Construct_UClass_UDebugBTTask_MoveTo_NoRegister()
{
	return UDebugBTTask_MoveTo::StaticClass();
}
struct Z_Construct_UClass_UDebugBTTask_MoveTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DebugBTTask_MoveTo.h" },
		{ "ModuleRelativePath", "Public/DebugBTTask_MoveTo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugBTTask_MoveTo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDebugBTTask_MoveTo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBTTask_MoveTo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugBTTask_MoveTo_Statics::ClassParams = {
	&UDebugBTTask_MoveTo::StaticClass,
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
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBTTask_MoveTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugBTTask_MoveTo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugBTTask_MoveTo()
{
	if (!Z_Registration_Info_UClass_UDebugBTTask_MoveTo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugBTTask_MoveTo.OuterSingleton, Z_Construct_UClass_UDebugBTTask_MoveTo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugBTTask_MoveTo.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<UDebugBTTask_MoveTo>()
{
	return UDebugBTTask_MoveTo::StaticClass();
}
UDebugBTTask_MoveTo::UDebugBTTask_MoveTo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugBTTask_MoveTo);
UDebugBTTask_MoveTo::~UDebugBTTask_MoveTo() {}
// End Class UDebugBTTask_MoveTo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_DebugBTTask_MoveTo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugBTTask_MoveTo, UDebugBTTask_MoveTo::StaticClass, TEXT("UDebugBTTask_MoveTo"), &Z_Registration_Info_UClass_UDebugBTTask_MoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugBTTask_MoveTo), 2026134793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_DebugBTTask_MoveTo_h_4045790377(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_DebugBTTask_MoveTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_DebugBTTask_MoveTo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
