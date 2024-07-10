// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CanKillNotify_CPP.generated.h"

UCLASS()
class PR2_API UCanKillNotify_CPP : public UAnimNotify
{
	GENERATED_BODY()
	
public:


	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

};
