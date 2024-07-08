// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Slider.h"
#include "Components/TextBlock.h"
#include "Menu_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PR2_API UMenu_CPP : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;



	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class USlider* RusSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class USlider* LizSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* RusCounterText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* LizCounterText;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UButton* ButtonGo;

	UFUNCTION()
	void OnButtonGoClicked();

	UFUNCTION()
	void OnRusSliderValueChanged(float Value);

	UFUNCTION()
	void OnLizSliderValueChanged(float Value);
};
