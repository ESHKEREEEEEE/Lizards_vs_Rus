// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Unit_CPP.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameMode_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PR2_API AGameMode_CPP : public AGameModeBase
{
	GENERATED_BODY()

public:
	/** Please add a variable description */
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Default")
	//TObjectPtr<USceneComponent> DefaultSceneRoot;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default") //set in blueprint
	FVector RusSpawnLocation;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default") //set in blueprint
	FVector LizSpawnLocation;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	int32 RusCounter;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	FVector CurrentRusLocation;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default") //???
	bool Spawned;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	int32 LizCounter;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	int32 NeededRus;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	int32 NeededLizards;

	UPROPERTY(BlueprintReadWrite, EditAnywhere) //set in blueprint
	TSubclassOf<class AUnit_CPP> RusToSpawn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere) //set in blueprint
	TSubclassOf<class AUnit_CPP> LizToSpawn;

	UFUNCTION(BlueprintCallable, Category = "Starting")
	void Nachinaem();

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default", meta = (EditInline = "true")) //set in blueprint
	TSubclassOf<class UMenu_CPP> MenuClass;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default", meta = (EditInline = "true")) //set in blueprint
	TSubclassOf<class AUnit_CPP> UnitClass;

	UPROPERTY(BlueprintReadWrite)
	class UMenu_CPP* Menu;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Unit game variables")
	USoundBase* BackgroundMusic;


protected:
	virtual void BeginPlay() override;

	
};
