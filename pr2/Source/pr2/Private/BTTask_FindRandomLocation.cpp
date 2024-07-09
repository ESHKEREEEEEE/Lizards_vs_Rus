// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindRandomLocation.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIC_Unit_CPP.h"

UBTTask_FindRandomLocation::UBTTask_FindRandomLocation(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Random Location In NavMesh";
}

EBTNodeResult::Type UBTTask_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (auto* const cont = Cast<AAIC_Unit_CPP>(OwnerComp.GetAIOwner())) {
		if (auto const npc = cont->GetPawn()) {
			auto const Origin = npc->GetActorLocation();
			if (auto* const world = GetWorld()) {
				if (auto* const NavSys = UNavigationSystemV1::GetCurrent(world)) {
					FNavLocation Loc;
					if (NavSys->GetRandomReachablePointInRadius(Origin, SearchRadius, Loc)) {
						OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
						FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
						return EBTNodeResult::Succeeded;
					}
				}
			}
		}
	}
	return EBTNodeResult::Failed;
}
