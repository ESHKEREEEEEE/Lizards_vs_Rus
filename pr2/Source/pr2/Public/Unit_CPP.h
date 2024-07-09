// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SphereComponent.h"
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "BTTask_Attack_CPP.h"
#include "Menu_CPP.h"
#include "Kismet/GameplayStatics.h"
#include "Unit_CPP.generated.h"

UCLASS()
class PR2_API AUnit_CPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUnit_CPP();

	//Skeletal Mesh Component
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Components")
	TObjectPtr<USkeletalMeshComponent> SkeletalMesh;

	//Fist Collision Sphere Component
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Components")
	USphereComponent* FistCollision;
	
	//Enemy class
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	TSubclassOf<AActor> EnemyClass;

	//Montage playng on attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assets")
	UAnimMontage* AttackAnimMontage;

	//Damage of this actor
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	double Damage;

	//Health of this actor
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	double Health;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	double PowerMultiplier = 1;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	USoundBase* HitSound;

	//Function called on CanKillNotify
	UFUNCTION(Category = "Input")
	void AnimNotifyAction();

	void FindEnemy();
	
	UBehaviorTree* GetBehaviorTree() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	bool isDead;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	bool isAttacking;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	bool isRunning;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	bool CanKill;
	
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	int Str;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	int Dex;
	
	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	USphereComponent* AttackRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Assets")
	USkeletalMesh* AlternateMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta = (AllowPrivateAccess="true"))
	UBehaviorTree* Tree;

	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};