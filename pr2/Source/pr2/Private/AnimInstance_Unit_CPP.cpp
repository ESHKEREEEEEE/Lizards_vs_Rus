// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance_Unit_CPP.h"
#include "Animation/AnimInstance.h"

void UAnimInstance_Unit_CPP::NativeInitializeAnimation()
{

	Super::NativeInitializeAnimation();
}

void UAnimInstance_Unit_CPP::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
	APawn* ThisPawn = TryGetPawnOwner();
	if (ThisPawn) {
		AUnit_CPP* Unit = Cast<AUnit_CPP>(ThisPawn);
		FVector VelocityVector = Unit->GetVelocity();
		//if (VelocityVector.X != 0 && VelocityVector.Y != 0) {  = true; }
		isRunning = (trunc(VelocityVector.X) != 0 || trunc(VelocityVector.Y) != 0);
	}
}
