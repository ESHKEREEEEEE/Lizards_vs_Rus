// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pr2/Public/Unit_CPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit_CPP() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PR2_API UClass* Z_Construct_UClass_AUnit_CPP();
PR2_API UClass* Z_Construct_UClass_AUnit_CPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_pr2();
// End Cross Module References

// Begin Class AUnit_CPP Function AnimNotifyAction
struct Z_Construct_UFunction_AUnit_CPP_AnimNotifyAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function called on CanKillNotify\n" },
#endif
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called on CanKillNotify" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_CPP_AnimNotifyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit_CPP, nullptr, "AnimNotifyAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_CPP_AnimNotifyAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnit_CPP_AnimNotifyAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUnit_CPP_AnimNotifyAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_CPP_AnimNotifyAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnit_CPP::execAnimNotifyAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotifyAction();
	P_NATIVE_END;
}
// End Class AUnit_CPP Function AnimNotifyAction

// Begin Class AUnit_CPP
void AUnit_CPP::StaticRegisterNativesAUnit_CPP()
{
	UClass* Class = AUnit_CPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotifyAction", &AUnit_CPP::execAnimNotifyAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnit_CPP);
UClass* Z_Construct_UClass_AUnit_CPP_NoRegister()
{
	return AUnit_CPP::StaticClass();
}
struct Z_Construct_UClass_AUnit_CPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Unit_CPP.h" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Skeletal Mesh Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeletal Mesh Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FistCollision_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fist Collision Sphere Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fist Collision Sphere Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Unit game variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enemy class\n" },
#endif
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enemy class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimMontage_MetaData[] = {
		{ "Category", "Assets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Montage playng on attack\n" },
#endif
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage playng on attack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Unit game variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Damage of this actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage of this actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Unit game variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health of this actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health of this actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerMultiplier_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isRunning_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanKill_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dex_MetaData[] = {
		{ "Category", "Unit game variables" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateMeshAsset_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Unit_CPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FistCollision;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimMontage;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Damage;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Health;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PowerMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSound;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static void NewProp_isAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
	static void NewProp_isRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isRunning;
	static void NewProp_CanKill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanKill;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Str;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlternateMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnit_CPP_AnimNotifyAction, "AnimNotifyAction" }, // 592438623
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnit_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_FistCollision = { "FistCollision", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, FistCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FistCollision_MetaData), NewProp_FistCollision_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_AttackAnimMontage = { "AttackAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, AttackAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimMontage_MetaData), NewProp_AttackAnimMontage_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_PowerMultiplier = { "PowerMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, PowerMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerMultiplier_MetaData), NewProp_PowerMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSound_MetaData), NewProp_HitSound_MetaData) };
void Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((AUnit_CPP*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUnit_CPP), &Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
void Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isAttacking_SetBit(void* Obj)
{
	((AUnit_CPP*)Obj)->isAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUnit_CPP), &Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAttacking_MetaData), NewProp_isAttacking_MetaData) };
void Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isRunning_SetBit(void* Obj)
{
	((AUnit_CPP*)Obj)->isRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isRunning = { "isRunning", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUnit_CPP), &Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isRunning_MetaData), NewProp_isRunning_MetaData) };
void Z_Construct_UClass_AUnit_CPP_Statics::NewProp_CanKill_SetBit(void* Obj)
{
	((AUnit_CPP*)Obj)->CanKill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_CanKill = { "CanKill", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUnit_CPP), &Z_Construct_UClass_AUnit_CPP_Statics::NewProp_CanKill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanKill_MetaData), NewProp_CanKill_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, Str), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Str_MetaData), NewProp_Str_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Dex = { "Dex", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, Dex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dex_MetaData), NewProp_Dex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, AttackRadius), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_AlternateMeshAsset = { "AlternateMeshAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, AlternateMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateMeshAsset_MetaData), NewProp_AlternateMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit_CPP, Tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tree_MetaData), NewProp_Tree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnit_CPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_FistCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_AttackAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_PowerMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_HitSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_isRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_CanKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Str,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Dex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_AttackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_AlternateMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_CPP_Statics::NewProp_Tree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_CPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUnit_CPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_pr2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_CPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnit_CPP_Statics::ClassParams = {
	&AUnit_CPP::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUnit_CPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_CPP_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_CPP_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnit_CPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnit_CPP()
{
	if (!Z_Registration_Info_UClass_AUnit_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnit_CPP.OuterSingleton, Z_Construct_UClass_AUnit_CPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnit_CPP.OuterSingleton;
}
template<> PR2_API UClass* StaticClass<AUnit_CPP>()
{
	return AUnit_CPP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnit_CPP);
AUnit_CPP::~AUnit_CPP() {}
// End Class AUnit_CPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Unit_CPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnit_CPP, AUnit_CPP::StaticClass, TEXT("AUnit_CPP"), &Z_Registration_Info_UClass_AUnit_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnit_CPP), 2574318748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Unit_CPP_h_1101199709(TEXT("/Script/pr2"),
	Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Unit_CPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dhvfn_Documents_GitHub_Lizards_vs_Rus_pr2_Source_pr2_Public_Unit_CPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
