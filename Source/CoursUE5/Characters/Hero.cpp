// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero.h"

#pragma region Public
AHero::AHero()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");

	if (!SpringArm)
	{
		GLog->Log(ELogVerbosity::Error, GetName() + " : Constructor -> SpringArm is null !");
		return;
	}

	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->SocketOffset = FVector(0, 0, 150);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	if (!Camera)
	{
		GLog->Log(ELogVerbosity::Error, GetName() + " : Constructor -> Camera is null !");
		return;
	}

	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeRotation(FRotator(-20, 0, 0));

	TObjectPtr<USkeletalMeshComponent> sMesh = GetMesh();
	if (!sMesh)
	{
		GLog->Log(ELogVerbosity::Error, GetName() + " : Constructor -> sMesh is null !");
		return;
	}
	sMesh->SetRelativeRotation(FRotator(0, -90, 0));
	sMesh->SetRelativeLocation(FVector(0, -100, 0));
}

void AHero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
#pragma endregion

#pragma region Private
void AHero::BeginPlay()
{
	Super::BeginPlay();
	
}
#pragma endregion

