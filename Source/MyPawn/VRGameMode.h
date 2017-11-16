// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "VRGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYPAWN_API AVRGameMode : public AGameMode
{
	GENERATED_BODY()
	
	
	AVRGameMode();
	virtual void StartPlay() override;
	
};
