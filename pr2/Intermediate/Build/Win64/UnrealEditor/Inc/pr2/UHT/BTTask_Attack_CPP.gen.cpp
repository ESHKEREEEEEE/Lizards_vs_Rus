// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/BTTask_Attack_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Attack_CPP() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
PR2_API UClass* Z_Construct_UClass_UBTTask_Attack_CPP();
PR2_API UClass* Z_Construct_UClass_UBTTask_Attack_CPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class UBTTask_Attack_CPP Function AttackEnded
struct Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics
{
	struct BTTask_Attack_CPP_eventAttackEnded_Parms
	{
		UBehaviorTreeComponent* OwnerComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//task execution\n" },
#endif
		{ "ModuleRelativePath", "Public/BTTask_Attack_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "task execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_Attack_CPP_eventAttackEnded_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComp_MetaData), NewProp_OwnerComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::NewProp_OwnerComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_Attack_CPP, nullptr, "AttackEnded", nullptr, nullptr, Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::BTTask_Attack_CPP_eventAttackEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::BTTask_Attack_CPP_eventAttackEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_Attack_CPP::execAttackEnded)
{
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackEnded(Z_Param_OwnerComp);
	P_NATIVE_END;
}
// End Class UBTTask_Attack_CPP Function AttackEnded

// Begin Class UBTTask_Attack_CPP
void UBTTask_Attack_CPP::StaticRegisterNativesUBTTask_Attack_CPP()
{
	UClass* Class = UBTTask_Attack_CPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackEnded", &UBTTask_Attack_CPP::execAttackEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Attack_CPP);
UClass* Z_Construct_UClass_UBTTask_Attack_CPP_NoRegister()
{
	return UBTTask_Attack_CPP::StaticClass();
}
struct Z_Construct_UClass_UBTTask_Attack_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_Attack_CPP.h" },
		{ "ModuleRelativePath", "Public/BTTask_Attack_CPP.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_Attack_CPP_AttackEnded, "AttackEnded" }, // 1805254959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Attack_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_Attack_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Attack_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Attack_CPP_Statics::ClassParams = {
	&UBTTask_Attack_CPP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Attack_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Attack_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_Attack_CPP()
{
	if (!Z_Registration_Info_UClass_UBTTask_Attack_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Attack_CPP.OuterSingleton, Z_Construct_UClass_UBTTask_Attack_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_Attack_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<UBTTask_Attack_CPP>()
{
	return UBTTask_Attack_CPP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Attack_CPP);
UBTTask_Attack_CPP::~UBTTask_Attack_CPP() {}
// End Class UBTTask_Attack_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_Attack_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Attack_CPP, UBTTask_Attack_CPP::StaticClass, TEXT("UBTTask_Attack_CPP"), &Z_Registration_Info_UClass_UBTTask_Attack_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Attack_CPP), 3396588995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_Attack_CPP_h_1218670117(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_Attack_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_BTTask_Attack_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
