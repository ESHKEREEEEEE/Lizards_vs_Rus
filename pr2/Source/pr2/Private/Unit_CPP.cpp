// ESHKEREEEEEE
// Add skeletal mesh, rotation, and Z axis -60 in blueprint

/*
	������ � GameMode
*/

#include "Unit_CPP.h"
//#include <string.h>
//#include <iostream>
#include "AnimInstance_Unit_CPP.h"
#include "CanKillNotify_CPP.h"

// Sets default values
AUnit_CPP::AUnit_CPP()
{
	//TICKS DISABELED FOR PERFORMANCE!!!!111!!!
	PrimaryActorTick.bCanEverTick = true;
	if (AlternateMeshAsset)
	{
		SkeletalMesh->SetSkeletalMesh(AlternateMeshAsset);
	}
	bUseControllerRotationYaw = true;
	FistCollision = CreateDefaultSubobject<USphereComponent>(TEXT("FistCollision"));
	FistCollision->SetupAttachment(GetMesh(), "RightHand");
}



void AUnit_CPP::AnimNotifyAction()
{
	
	UGameplayStatics::PlaySound2D(GetWorld(), HitSound, 0.125, 1, 0, nullptr, UGameplayStatics::GetPlayerCharacter(GetWorld(), 0), true);
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Green, FString(GetName() + "catched anim notify"));
	TArray<AActor*> OverActors;
	this->GetOverlappingActors(OverActors, EnemyClass);
	for (int i = 0; i < OverActors.Num(); i++) {
		if (OverActors[i]) {
			GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Purple, FString("Collision of " + this->GetName() + " with " + OverActors[i]->GetName()));
			AUnit_CPP* CurrentEnemy = Cast<AUnit_CPP>(OverActors[i]);
			if (CurrentEnemy) {
				CurrentEnemy->Health = CurrentEnemy->Health - this->Damage;
				if (CurrentEnemy->Health <= 0) {
					//Add killing enemy with animation
					UAnimInstance_Unit_CPP* CurrentEnemyAnim = Cast<UAnimInstance_Unit_CPP>(CurrentEnemy->GetMesh()->GetAnimInstance());
					if (CurrentEnemyAnim) {
						CurrentEnemyAnim->isDeadAnim = true;
					}
					CurrentEnemy->Tags.Remove(FName("Alive"));
				}
			}
		}
	}
}


UBehaviorTree* AUnit_CPP::GetBehaviorTree() const
{
	return this->Tree;
}

// Called when the game starts or when spawned
void AUnit_CPP::BeginPlay()
{
	this->Str = PowerMultiplier * FMath::RandRange(1, 10);
	this->Health = Str * 10;// 10 Health per Str point
	this->Dex = PowerMultiplier * FMath::RandRange(1, 10);
	this->Damage = Dex * 5;// 5 Damage per Dex point
	Super::BeginPlay();
	
}

// Called every frame
void AUnit_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AUnit_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
