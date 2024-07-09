// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetEnemy_CPP.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "Unit_CPP.h"
#include "AIC_Unit_CPP.h"


UBTTask_SetEnemy_CPP::UBTTask_SetEnemy_CPP(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Enemy";
}

EBTNodeResult::Type UBTTask_SetEnemy_CPP::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = EBTNodeResult::Failed;
	if (auto* const Controller = Cast<AAIC_Unit_CPP>(OwnerComp.GetAIOwner())) {
		if (auto const Unit = Cast<AUnit_CPP>(Controller->GetPawn())) {
			UWorld* world = this->GetWorld();
			if (world) {
				TArray<AActor*> OutActors;
				if (Unit->EnemyClass) {
					UGameplayStatics::GetAllActorsOfClassWithTag(world, Unit->EnemyClass, FName("Alive"), OutActors);
					if (!OutActors.IsEmpty()) {
						float distance;
						AActor* NearestEnemy = UGameplayStatics::FindNearestActor(Unit->GetActorLocation(), OutActors, distance);
						if (NearestEnemy) {
							OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName("Enemy"), NearestEnemy);

							if (OwnerComp.GetBlackboardComponent()->GetValueAsObject(FName("Enemy"))) { Result = EBTNodeResult::Succeeded; }


							//FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

						}
						else GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No NearestEnemy"));
					}
				} 
				else GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("EnemyClass is empty"));
			}
			else GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No world"));
		}
		else GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No Unit"));
	}
	else GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No Controller"));
	//return EBTNodeResult::Failed;
	if (Result == EBTNodeResult::Succeeded) {GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Purple, FString("UBTTask_SetEnemy_CPP Succeeded")); }
	else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Purple, FString("UBTTask_SetEnemy_CPP Failed")); }
	FinishLatentTask(OwnerComp, Result);
	return Result;
}
