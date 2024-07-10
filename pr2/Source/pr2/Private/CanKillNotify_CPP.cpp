// Fill out your copyright notice in the Description page of Project Settings.


#include "CanKillNotify_CPP.h"
#include "Unit_CPP.h"

void UCanKillNotify_CPP::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (GEngine) {
		//GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Purple, FString("Notify " + MeshComp->GetOwner()->GetName())); //DEBUG
	}
	AUnit_CPP* Unit = Cast<AUnit_CPP>(MeshComp->GetOwner());
	if (Unit) {
		Unit->AnimNotifyAction();
	}
	//Super::Notify(MeshComp, Animation);
}
