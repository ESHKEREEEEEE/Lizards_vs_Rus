// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Unit_CPP.h"
#include "AIController.h"
#include "AIC_Unit_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PR2_API AAIC_Unit_CPP : public AAIController
{
	GENERATED_BODY()
	
public: 
	explicit AAIC_Unit_CPP(FObjectInitializer const& ObjectInitializer);

	void Nachinaem(AUnit_CPP* Unit);
};
