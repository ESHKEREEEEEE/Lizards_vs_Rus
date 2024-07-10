// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/Menu_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenu_CPP() {}

// Begin Cross Module References
PR2_API UClass* Z_Construct_UClass_UMenu_CPP();
PR2_API UClass* Z_Construct_UClass_UMenu_CPP_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class UMenu_CPP Function OnButtonGoClicked
struct Z_Construct_UFunction_UMenu_CPP_OnButtonGoClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_CPP_OnButtonGoClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu_CPP, nullptr, "OnButtonGoClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_CPP_OnButtonGoClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_CPP_OnButtonGoClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenu_CPP_OnButtonGoClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_CPP_OnButtonGoClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu_CPP::execOnButtonGoClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonGoClicked();
	P_NATIVE_END;
}
// End Class UMenu_CPP Function OnButtonGoClicked

// Begin Class UMenu_CPP Function OnLizSliderValueChanged
struct Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics
{
	struct Menu_CPP_eventOnLizSliderValueChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Menu_CPP_eventOnLizSliderValueChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu_CPP, nullptr, "OnLizSliderValueChanged", nullptr, nullptr, Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::Menu_CPP_eventOnLizSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::Menu_CPP_eventOnLizSliderValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu_CPP::execOnLizSliderValueChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLizSliderValueChanged(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMenu_CPP Function OnLizSliderValueChanged

// Begin Class UMenu_CPP Function OnRusSliderValueChanged
struct Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics
{
	struct Menu_CPP_eventOnRusSliderValueChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Menu_CPP_eventOnRusSliderValueChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu_CPP, nullptr, "OnRusSliderValueChanged", nullptr, nullptr, Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::Menu_CPP_eventOnRusSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::Menu_CPP_eventOnRusSliderValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu_CPP::execOnRusSliderValueChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRusSliderValueChanged(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMenu_CPP Function OnRusSliderValueChanged

// Begin Class UMenu_CPP
void UMenu_CPP::StaticRegisterNativesUMenu_CPP()
{
	UClass* Class = UMenu_CPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonGoClicked", &UMenu_CPP::execOnButtonGoClicked },
		{ "OnLizSliderValueChanged", &UMenu_CPP::execOnLizSliderValueChanged },
		{ "OnRusSliderValueChanged", &UMenu_CPP::execOnRusSliderValueChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenu_CPP);
UClass* Z_Construct_UClass_UMenu_CPP_NoRegister()
{
	return UMenu_CPP::StaticClass();
}
struct Z_Construct_UClass_UMenu_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Menu_CPP.h" },
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RusSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LizSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RusCounterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LizCounterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonGo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RusSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LizSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RusCounterText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LizCounterText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonGo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenu_CPP_OnButtonGoClicked, "OnButtonGoClicked" }, // 2532483933
		{ &Z_Construct_UFunction_UMenu_CPP_OnLizSliderValueChanged, "OnLizSliderValueChanged" }, // 1885276015
		{ &Z_Construct_UFunction_UMenu_CPP_OnRusSliderValueChanged, "OnRusSliderValueChanged" }, // 1343813891
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenu_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_CPP_Statics::NewProp_RusSlider = { "RusSlider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu_CPP, RusSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RusSlider_MetaData), NewProp_RusSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_CPP_Statics::NewProp_LizSlider = { "LizSlider", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu_CPP, LizSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LizSlider_MetaData), NewProp_LizSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_CPP_Statics::NewProp_RusCounterText = { "RusCounterText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu_CPP, RusCounterText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RusCounterText_MetaData), NewProp_RusCounterText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_CPP_Statics::NewProp_LizCounterText = { "LizCounterText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu_CPP, LizCounterText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LizCounterText_MetaData), NewProp_LizCounterText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_CPP_Statics::NewProp_ButtonGo = { "ButtonGo", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu_CPP, ButtonGo), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonGo_MetaData), NewProp_ButtonGo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenu_CPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_CPP_Statics::NewProp_RusSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_CPP_Statics::NewProp_LizSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_CPP_Statics::NewProp_RusCounterText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_CPP_Statics::NewProp_LizCounterText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_CPP_Statics::NewProp_ButtonGo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_CPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenu_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenu_CPP_Statics::ClassParams = {
	&UMenu_CPP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenu_CPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_CPP_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenu_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenu_CPP()
{
	if (!Z_Registration_Info_UClass_UMenu_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenu_CPP.OuterSingleton, Z_Construct_UClass_UMenu_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenu_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<UMenu_CPP>()
{
	return UMenu_CPP::StaticClass();
}
UMenu_CPP::UMenu_CPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenu_CPP);
UMenu_CPP::~UMenu_CPP() {}
// End Class UMenu_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenu_CPP, UMenu_CPP::StaticClass, TEXT("UMenu_CPP"), &Z_Registration_Info_UClass_UMenu_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenu_CPP), 1486489638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_2798275091(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Menu_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
