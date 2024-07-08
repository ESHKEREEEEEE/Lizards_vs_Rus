// Fill out your copyright notice in the Description page of Project Settings.


#include "AIC_Unit_CPP.h"
#include "Kismet/GameplayStatics.h"

AAIC_Unit_CPP::AAIC_Unit_CPP(FObjectInitializer const& ObjectInitializer)
{
}

void AAIC_Unit_CPP::Nachinaem(AUnit_CPP* Unit)
{
	//UBlackboardComponent* b;
	//UseBlackboard(Unit->GetBehaviorTree()->BlackboardAsset, b);
	//Blackboard = b;
	RunBehaviorTree(Unit->GetBehaviorTree());
}
