// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "DebugBTTask_MoveTo.generated.h"

/**
 * 
 */
UCLASS()
class PR2_API UDebugBTTask_MoveTo : public UBTTask_MoveTo
{
	GENERATED_BODY()

public:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override; //task execution
	
};
