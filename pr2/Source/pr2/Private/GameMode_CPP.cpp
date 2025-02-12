// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode_CPP.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/InputSettings.h"
#include "Unit_CPP.h"
#include "AIC_Unit_CPP.h"
#include <NavigationSystem.h>

void AGameMode_CPP::BeginPlay()
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PlayerController)
	{
		// Create and bind the input component if it doesn't exist
		if (!PlayerController->InputComponent)
		{
			PlayerController->InputComponent = NewObject<UInputComponent>(PlayerController);
			PlayerController->InputComponent->RegisterComponent();
		}

		// Bind the ESC key to the HandleExitGame function
		const FInputActionKeyMapping ExitGameMapping("ExitGame", EKeys::Escape);
		UInputSettings::GetInputSettings()->AddActionMapping(ExitGameMapping);

		PlayerController->InputComponent->BindAction("ExitGame", IE_Pressed, this, &AGameMode_CPP::HandleExitGame);
	}
	//�������� �������
	if (MenuClass) {
		UWorld* world = GetWorld();
		if (world) {
			Menu = CreateWidget<UMenu_CPP>(PlayerController, MenuClass);
			//Menu = CreateWidget<UMenu_CPP>(this, MenuClass);
			PlayerController->SetInputMode(FInputModeUIOnly());
			Menu->AddToPlayerScreen();
		}
	}
	Super::BeginPlay();
}

void AGameMode_CPP::HandleExitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}

void AGameMode_CPP::Nachinaem()
{
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Yellow, FString("GameMode->Nachinaem()"));
	UWorld* world = GetWorld();
	if (world) {
		UGameplayStatics::PlaySound2D(world, BackgroundMusic, 0.15, 1, 0, nullptr, UGameplayStatics::GetPlayerCharacter(GetWorld(), 0), true);
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

			//
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
						else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No current controller")); }
					}
					else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No current unit")); }
				}
			}
			else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No nenu")); }
		}
		else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No world")); }
	}
	else { GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, FString("No menu class")); }
}

AGameMode_CPP* AGameMode_CPP::MyGetGameMode()
{
	return this;
}
