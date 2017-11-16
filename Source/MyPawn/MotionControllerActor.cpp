// Fill out your copyright notice in the Description page of Project Settings.

#include "MotionControllerActor.h"
#include "Components/SplineComponent.h"
#include "MotionControllerPawn.h"
#include "MyPawn.h"

// Sets default values

AMotionControllerActor::AMotionControllerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

#pragma region Komponenty Actora

	this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	this->Scene->SetupAttachment(RootComponent);

	this->MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	this->MotionController->SetupAttachment(Scene);
//	this->MotionController->Hand = EControllerHand::Left;

	this->HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	this->HandMesh->SetupAttachment(MotionController);

	this->ArcDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("ArcDirection"));
	this->ArcDirection->SetupAttachment(HandMesh);

	this->ArcSpline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
	this->ArcSpline->SetupAttachment(HandMesh);

	this->GrabSphere = CreateDefaultSubobject<USphereComponent>(TEXT("GrabSphere"));
	this->GrabSphere->SetupAttachment(HandMesh);

	this->ArcEndPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArcEndPoint"));
	this->ArcEndPoint->SetupAttachment(Scene);

	this->TeleportCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportCylinder"));
	this->TeleportCylinder->SetupAttachment(Scene);

	this->Ring = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));
	this->Ring->SetupAttachment(TeleportCylinder);

	this->Arrow = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	this->Arrow->SetupAttachment(TeleportCylinder);

	this->RoomScaleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoomScaleMesh"));
	this->RoomScaleMesh->SetupAttachment(Arrow);

#pragma endregion

#pragma region Dodanie skeletalMesh

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Skeletal_Hand_Asset(TEXT("SkeletalMesh'/Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right'"));
	if (Skeletal_Hand_Asset.Succeeded())
	{
		HandMesh->SetSkeletalMesh(Skeletal_Hand_Asset.Object);
		HandMesh->SetRelativeLocation(FVector(-12.7f, -0.03f, -1.78f));
		HandMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0f));
		HandMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
#pragma endregion

}



// Called when the game starts or when spawned
void AMotionControllerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotionControllerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

