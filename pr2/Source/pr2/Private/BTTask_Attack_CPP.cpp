// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Attack_CPP.h"
#include "AIController.h"
#include "Unit_CPP.h"


UBTTask_Attack_CPP::UBTTask_Attack_CPP(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Attack enemy";
}

EBTNodeResult::Type UBTTask_Attack_CPP::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBehaviorTreeComponent* component = (&OwnerComp); //save UBehaviorTreeComponent
	AAIController* controller = OwnerComp.GetAIOwner();// save controller
	AUnit_CPP* unit = Cast<AUnit_CPP>(controller->GetPawn()); //save curent unit
	//GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Purple, FString(unit->GetName() + "Started executing attack")); //DEBUG
	float time;
	time = unit->GetMesh()->GetAnimInstance()->Montage_Play(unit->AttackAnimMontage, 1.0f, EMontagePlayReturnType::Duration, 0.0f, true); //playing attack montage

	FTimerDelegate TimerDel; //timer delegate
	FTimerHandle TimerHandle; //timer handle
	TimerDel.BindUFunction(this, FName("AttackEnded"), &OwnerComp); //binding EttackEnded to timer delegate
	unit->GetWorldTimerManager().ClearTimer(TimerHandle); //reset TimerHandle timers
	unit->GetWorldTimerManager().SetTimer(TimerHandle, TimerDel, time + 0.1f, false); //Set timer handle timer on montage duration then execute timer delegate
	FinishLatentTask(OwnerComp, EBTNodeResult::InProgress);// set task in progress
	return EBTNodeResult::InProgress;
}

void UBTTask_Attack_CPP::AttackEnded(UBehaviorTreeComponent* OwnerComp)
{ 
	UBehaviorTreeComponent* component = (OwnerComp); //save UBehaviorTreeComponent
	AAIController* controller = OwnerComp->GetAIOwner(); // save controller
	if (controller) {
		AUnit_CPP* unit = Cast<AUnit_CPP>(controller->GetPawn()); //save curent unit
		//GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Purple, FString(unit->GetName() + "ended attacking")); //DEBUG
		if (unit) { //check unit correct casting
			//GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Green, FString(unit->GetName() + "Succesfully finished task")); //DEBUG
			component->OnTaskFinished(this, EBTNodeResult::Succeeded);// set task success
		}
	}
}