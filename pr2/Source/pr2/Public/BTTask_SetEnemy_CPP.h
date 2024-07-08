// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "AIC_Unit_CPP.h"
#include "AIController.h"
#include "BTTask_SetEnemy_CPP.generated.h"


/**
 * 
 */
UCLASS()
class PR2_API UBTTask_SetEnemy_CPP : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	explicit UBTTask_SetEnemy_CPP(FObjectInitializer const& ObjectInitializer); //init
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override; //task execution
};
