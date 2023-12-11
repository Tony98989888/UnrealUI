// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PanelBase.generated.h"

/**
 * 
 */
UCLASS()
class UNREALUI_API UPanelBase : public UUserWidget
{
	GENERATED_BODY()


protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animations")
	class UWidgetAnimation* ShowAnim;
};
