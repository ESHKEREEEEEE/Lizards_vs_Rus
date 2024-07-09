// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetEnemy_CPP.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Unit_CPP.h"
#include "AIC_Unit_CPP.h"


UBTTask_SetEnemy_CPP::UBTTask_SetEnemy_CPP(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Enemy";
}

EBTNodeResult::Type UBTTask_SetEnemy_CPP::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (auto* const Controller = Cast<AAIC_Unit_CPP>(OwnerComp.GetAIOwner())) {
		if (auto const Unit = Cast<AUnit_CPP>(Controller->GetPawn())) {
			UWorld* world = this->GetWorld();
			if (world) {
				TArray<AActor*> OutActors;
				UGameplayStatics::GetAllActorsOfClassWithTag(world, Unit->EnemyClass, FName("Alive"), OutActors);
				if (!OutActors.IsEmpty()) {
					float distance;
					AActor* NearestEnemy = UGameplayStatics::FindNearestActor(Unit->GetActorLocation(), OutActors, distance);
					OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName("Enemy"), NearestEnemy);
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
			}
		}
	}
	return EBTNodeResult::Failed;
}
