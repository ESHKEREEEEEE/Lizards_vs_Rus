// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/FistCollisionCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFistCollisionCPP() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
PR2_API UClass* Z_Construct_UClass_UFistCollisionCPP();
PR2_API UClass* Z_Construct_UClass_UFistCollisionCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class UFistCollisionCPP
void UFistCollisionCPP::StaticRegisterNativesUFistCollisionCPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFistCollisionCPP);
UClass* Z_Construct_UClass_UFistCollisionCPP_NoRegister()
{
	return UFistCollisionCPP::StaticClass();
}
struct Z_Construct_UClass_UFistCollisionCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "FistCollisionCPP.h" },
		{ "ModuleRelativePath", "Public/FistCollisionCPP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFistCollisionCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFistCollisionCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USphereComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFistCollisionCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFistCollisionCPP_Statics::ClassParams = {
	&UFistCollisionCPP::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFistCollisionCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UFistCollisionCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFistCollisionCPP()
{
	if (!Z_Registration_Info_UClass_UFistCollisionCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFistCollisionCPP.OuterSingleton, Z_Construct_UClass_UFistCollisionCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFistCollisionCPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<UFistCollisionCPP>()
{
	return UFistCollisionCPP::StaticClass();
}
UFistCollisionCPP::UFistCollisionCPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFistCollisionCPP);
UFistCollisionCPP::~UFistCollisionCPP() {}
// End Class UFistCollisionCPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_FistCollisionCPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFistCollisionCPP, UFistCollisionCPP::StaticClass, TEXT("UFistCollisionCPP"), &Z_Registration_Info_UClass_UFistCollisionCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFistCollisionCPP), 407645801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_FistCollisionCPP_h_2493244212(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_FistCollisionCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_FistCollisionCPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
