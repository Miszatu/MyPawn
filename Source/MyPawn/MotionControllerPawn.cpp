// Fill out your copyright notice in the Description page of Project Settings.

#include "MotionControllerPawn.h"
#include "MyPawn.h"

// Sets default values
AMotionControllerPawn::AMotionControllerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	this->RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	this->RootScene->SetupAttachment(RootComponent);

	this->VROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	this->VROrigin->SetupAttachment(RootScene);

	this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	this->Camera->SetupAttachment(VROrigin);

}

// Called when the game starts or when spawned
void AMotionControllerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotionControllerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMotionControllerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}