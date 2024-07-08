// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode_CPP.h"
#include "Kismet/GameplayStatics.h"
#include "Unit_CPP.h"
#include "AIC_Unit_CPP.h"

void AGameMode_CPP::BeginPlay()
{
	//Создание виджета
	if (MenuClass) {
		UWorld* world = GetWorld();
		if (world) {
			APlayerController* PlayerController = world->GetFirstPlayerController();
			Menu = CreateWidget<UMenu_CPP>(PlayerController, MenuClass);
			//Menu = CreateWidget<UMenu_CPP>(this, MenuClass);
			PlayerController->SetInputMode(FInputModeUIOnly());
			Menu->AddToPlayerScreen();
		}
	}

	Super::BeginPlay();
}

void AGameMode_CPP::Nachinaem()
{
	UWorld* world = GetWorld();
	if (world) {
		if (RusToSpawn) {
			while (RusCounter < NeededRus) {
				FActorSpawnParameters RusSpawnParams;
				FVector BoundingBoxSpawnHalfSize = FVector(10000, 4000, 0);
				FVector RusSpawnPoint = UKismetMathLibrary::RandomPointInBoundingBox(RusSpawnLocation, BoundingBoxSpawnHalfSize);
				FRotator RusRotator;
				AUnit_CPP* ValidRus = world->SpawnActor<AUnit_CPP>(RusToSpawn, RusSpawnPoint, RusRotator, RusSpawnParams);
				if (ValidRus)
				{
					RusCounter++;
					ValidRus->Tags.Add(FName("Alive"));
				}
			}
		} else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("RusToSpawn is not found")); }
		if (LizToSpawn) {


			//FString DebugNeededLizardsMessage = FString("Needed Lizards: ");
			//DebugNeededLizardsMessage.AppendInt(NeededLizards);
			//GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, DebugNeededLizardsMessage);


			while (LizCounter < NeededLizards) {
				FActorSpawnParameters LizSpawnParams;
				FVector BoundingBoxSpawnHalfSize = FVector(10000, 4000, 0);
				FVector LizSpawnPoint = UKismetMathLibrary::RandomPointInBoundingBox(LizSpawnLocation, BoundingBoxSpawnHalfSize);
				FRotator LizRotator;
				AUnit_CPP* ValidLiz = world->SpawnActor<AUnit_CPP>(LizToSpawn, LizSpawnPoint, LizRotator, LizSpawnParams);
				if (ValidLiz)
				{
					LizCounter++;
					ValidLiz->Tags.Add(FName("Alive"));
				}
			}
		} else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("LizToSpawn is not found")); }
	}
	if (MenuClass) {
		if (world) {
			APlayerController* PlayerController = world->GetFirstPlayerController();
			PlayerController->SetInputMode(FInputModeGameOnly());
			if (Menu) {
				Menu->RemoveFromParent();
				TArray<AActor*> OutActors;
				TSubclassOf<AUnit_CPP> ClassToGet = AUnit_CPP::StaticClass();
				UGameplayStatics::GetAllActorsOfClass(world, ClassToGet, OutActors);
				for (int i = 0; i < OutActors.Num(); i++) {
					AUnit_CPP* CurrentUnit = Cast<AUnit_CPP>(OutActors[i]);
					if (CurrentUnit) {
						AAIC_Unit_CPP* CurrentController = Cast<AAIC_Unit_CPP>(CurrentUnit->GetController());
						if (CurrentController) {
							CurrentController->Nachinaem(CurrentUnit);
						}
					}
				}
			}
		}
	}
	

	//скрытие виджета


}
