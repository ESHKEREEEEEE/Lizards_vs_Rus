// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_Attack_CPP.generated.h"

UCLASS()
class PR2_API UBTTask_Attack_CPP : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	explicit UBTTask_Attack_CPP(FObjectInitializer const& ObjectInitializer); //init
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override; //task execution

	UFUNCTION()
	void AttackEnded(UBehaviorTreeComponent* OwnerComp);//delayed ending
};
