// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/GameMode_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMode_CPP() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PR2_API UClass* Z_Construct_UClass_AGameMode_CPP();
PR2_API UClass* Z_Construct_UClass_AGameMode_CPP_NoRegister();
PR2_API UClass* Z_Construct_UClass_AUnit_CPP_NoRegister();
PR2_API UClass* Z_Construct_UClass_UMenu_CPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class AGameMode_CPP Function MyGetGameMode
struct Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics
{
	struct GameMode_CPP_eventMyGetGameMode_Parms
	{
		AGameMode_CPP* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Get" },
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMode_CPP_eventMyGetGameMode_Parms, ReturnValue), Z_Construct_UClass_AGameMode_CPP_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode_CPP, nullptr, "MyGetGameMode", nullptr, nullptr, Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::GameMode_CPP_eventMyGetGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::GameMode_CPP_eventMyGetGameMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode_CPP::execMyGetGameMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGameMode_CPP**)Z_Param__Result=P_THIS->MyGetGameMode();
	P_NATIVE_END;
}
// End Class AGameMode_CPP Function MyGetGameMode

// Begin Class AGameMode_CPP Function Nachinaem
struct Z_Construct_UFunction_AGameMode_CPP_Nachinaem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Starting" },
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_CPP_Nachinaem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode_CPP, nullptr, "Nachinaem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_CPP_Nachinaem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_CPP_Nachinaem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameMode_CPP_Nachinaem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_CPP_Nachinaem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode_CPP::execNachinaem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Nachinaem();
	P_NATIVE_END;
}
// End Class AGameMode_CPP Function Nachinaem

// Begin Class AGameMode_CPP
void AGameMode_CPP::StaticRegisterNativesAGameMode_CPP()
{
	UClass* Class = AGameMode_CPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MyGetGameMode", &AGameMode_CPP::execMyGetGameMode },
		{ "Nachinaem", &AGameMode_CPP::execNachinaem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameMode_CPP);
UClass* Z_Construct_UClass_AGameMode_CPP_NoRegister()
{
	return AGameMode_CPP::StaticClass();
}
struct Z_Construct_UClass_AGameMode_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode_CPP.h" },
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RusSpawnLocation_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description *///set in blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description //set in blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LizSpawnLocation_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description *///set in blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description //set in blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RusCounter_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRusLocation_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description *///???\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description //???" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawned_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description *///???\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description //???" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LizCounter_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeededRus_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeededLizards_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RusToSpawn_MetaData[] = {
		{ "Category", "GameMode_CPP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//set in blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set in blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LizToSpawn_MetaData[] = {
		{ "Category", "GameMode_CPP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//set in blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set in blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description *///set in blueprint\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description //set in blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitClass_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//set in blueprint\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set in blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[] = {
		{ "Category", "GameMode_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMusic_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/GameMode_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RusSpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LizSpawnLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RusCounter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRusLocation;
	static void NewProp_Spawned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Spawned;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LizCounter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeededRus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeededLizards;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RusToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LizToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundMusic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameMode_CPP_MyGetGameMode, "MyGetGameMode" }, // 2262058903
		{ &Z_Construct_UFunction_AGameMode_CPP_Nachinaem, "Nachinaem" }, // 383979101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMode_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_RusSpawnLocation = { "RusSpawnLocation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, RusSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RusSpawnLocation_MetaData), NewProp_RusSpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_LizSpawnLocation = { "LizSpawnLocation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, LizSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LizSpawnLocation_MetaData), NewProp_LizSpawnLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_RusCounter = { "RusCounter", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, RusCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RusCounter_MetaData), NewProp_RusCounter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_CurrentRusLocation = { "CurrentRusLocation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, CurrentRusLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRusLocation_MetaData), NewProp_CurrentRusLocation_MetaData) };
void Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_Spawned_SetBit(void* Obj)
{
	((AGameMode_CPP*)Obj)->Spawned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_Spawned = { "Spawned", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameMode_CPP), &Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_Spawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawned_MetaData), NewProp_Spawned_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_LizCounter = { "LizCounter", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, LizCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LizCounter_MetaData), NewProp_LizCounter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_NeededRus = { "NeededRus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, NeededRus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeededRus_MetaData), NewProp_NeededRus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_NeededLizards = { "NeededLizards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, NeededLizards), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeededLizards_MetaData), NewProp_NeededLizards_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_RusToSpawn = { "RusToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, RusToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnit_CPP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RusToSpawn_MetaData), NewProp_RusToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_LizToSpawn = { "LizToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, LizToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnit_CPP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LizToSpawn_MetaData), NewProp_LizToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, MenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMenu_CPP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuClass_MetaData), NewProp_MenuClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_UnitClass = { "UnitClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, UnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnit_CPP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitClass_MetaData), NewProp_UnitClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, Menu), Z_Construct_UClass_UMenu_CPP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Menu_MetaData), NewProp_Menu_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_BackgroundMusic = { "BackgroundMusic", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode_CPP, BackgroundMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundMusic_MetaData), NewProp_BackgroundMusic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameMode_CPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_RusSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_LizSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_RusCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_CurrentRusLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_Spawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_LizCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_NeededRus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_NeededLizards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_RusToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_LizToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_MenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_UnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_CPP_Statics::NewProp_BackgroundMusic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_CPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameMode_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMode_CPP_Statics::ClassParams = {
	&AGameMode_CPP::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameMode_CPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_CPP_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameMode_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameMode_CPP()
{
	if (!Z_Registration_Info_UClass_AGameMode_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMode_CPP.OuterSingleton, Z_Construct_UClass_AGameMode_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameMode_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<AGameMode_CPP>()
{
	return AGameMode_CPP::StaticClass();
}
AGameMode_CPP::AGameMode_CPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMode_CPP);
AGameMode_CPP::~AGameMode_CPP() {}
// End Class AGameMode_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameMode_CPP, AGameMode_CPP::StaticClass, TEXT("AGameMode_CPP"), &Z_Registration_Info_UClass_AGameMode_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMode_CPP), 1450757818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_1927829227(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_GameMode_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
