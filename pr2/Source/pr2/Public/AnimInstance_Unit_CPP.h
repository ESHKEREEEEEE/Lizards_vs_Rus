// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Unit_CPP.h"
#include "AnimInstance_Unit_CPP.generated.h"


/**
 * 
 */
UCLASS()
class PR2_API UAnimInstance_Unit_CPP : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animation")
	bool isRunning;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animation")
	bool isDeadAnim;
	
};
