// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu_CPP.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "GameMode_CPP.h"
#include "Internationalization/Text.h"

void UMenu_CPP::NativeConstruct()
{
	Super::NativeConstruct();
	bIsFocusable = true;
	SetUserFocus(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (ButtonGo) {
		this->ButtonGo->OnClicked.AddDynamic(this, &UMenu_CPP::OnButtonGoClicked);
	}
	if (RusSlider) {
		this->RusSlider->OnValueChanged.AddDynamic(this, &UMenu_CPP::OnRusSliderValueChanged);
	}
	if (LizSlider) {
		this->LizSlider->OnValueChanged.AddDynamic(this, &UMenu_CPP::OnLizSliderValueChanged);
	}
	
}

void UMenu_CPP::OnButtonGoClicked()
{
	{
		// Get reference to the GameMode
		AGameMode_CPP* GameMode = Cast<AGameMode_CPP>(UGameplayStatics::GetGameMode(this));
		if (GameMode)
		{
			GameMode->Nachinaem();
		}
	}
}

void UMenu_CPP::OnRusSliderValueChanged(float Value)
{
	FText TextToSet = FText::AsNumber(truncf(Value));
	RusCounterText->SetText(TextToSet);
	AGameModeBase* tempGM =   UGameplayStatics::GetGameMode(GetWorld()); //add check
	if (AGameMode_CPP* MyGameMode = Cast<AGameMode_CPP>(tempGM)) {
		MyGameMode->NeededRus = truncf(Value);
	}
}

void UMenu_CPP::OnLizSliderValueChanged(float Value)
{
	FText TextToSet = FText::AsNumber(truncf(Value));
	LizCounterText->SetText(TextToSet);
	AGameModeBase* tempGM = UGameplayStatics::GetGameMode(GetWorld()); //add check
	if (AGameMode_CPP* MyGameMode = Cast<AGameMode_CPP>(tempGM)) {
		MyGameMode->NeededLizards = truncf(Value);
	}
}
