// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MotionControllerActor.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerPawn.generated.h"

UCLASS()
class MYPAWN_API AMotionControllerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMotionControllerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USceneComponent* RootScene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USceneComponent* VROrigin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UCameraComponent* Camera;

#pragma region zmienne
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	float FadeOutDuration = 0.1;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	float FadeInDuration = 0.2;
	//
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool IsTeleporting = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	FLinearColor TeleportFadeColor;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	float ThumbDeadzone = 0.7f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool RightStickDown = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool LeftStickDown = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool UseControllerRollToRotate = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	float DefaultPlayerHeight = 180.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	class AMotionControllerActor* LeftController;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	class AMotionControllerActor* RightController;

#pragma endregion

};
