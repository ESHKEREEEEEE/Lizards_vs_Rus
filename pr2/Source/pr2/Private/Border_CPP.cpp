// Fill out your copyright notice in the Description page of Project Settings.


#include "Border_CPP.h"

// Sets default values
ABorder_CPP::ABorder_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Box = CreateDefaultSubobject<UBoxComponent>(FName("Box"));
	SetRootComponent(Box);
	Box->SetCollisionProfileName(FName("BlockAll"), false);
}


