// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyPawn.h"

/* VR Includes */
#include "HeadMountedDisplayFunctionLibrary.h"
#include "MotionControllerComponent.h"

#include "MotionControllerActor.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EGripEnum : uint8
{
	GE_Open UMETA(DisplayName = "Open"),
	GE_CanGrab UMETA(DisplayName = "CanGrab"),
	GE_Grab UMETA(DisplayName = "Grab")
};

UCLASS()
class MYPAWN_API AMotionControllerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMotionControllerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMotionControllerComponent* MotionController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* HandMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UArrowComponent* ArcDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USplineComponent* ArcSpline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USphereComponent* GrabSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* ArcEndPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* TeleportCylinder;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Ring;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Arrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* RoomScaleMesh;

#pragma region zmienne

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	EControllerHand Hand;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UActorComponent* AttachedActor;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool IsTeleporterActive = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool IsRoomScale = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	FVector TeleportDestination = FVector::ZeroVector;
	//
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool IsValidTeleportDestination = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
	//	EGripEnum  GripEnum;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	bool bWantsToGrip = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	FRotator TeleportRotation;
	//
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	float TeleportLaunchVelocity = 900.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	FRotator InitialControllerRotation;

#pragma endregion

};
