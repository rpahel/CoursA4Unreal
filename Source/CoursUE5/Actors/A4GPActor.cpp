// Fill out your copyright notice in the Description page of Project Settings.


#include "A4GPActor.h"

#pragma region Public
AA4GPActor::AA4GPActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("Root Transform");

	if (!SceneComponent)
	{
		GLog->Log(ELogVerbosity::Error, GetName() + " : Constructor -> SceneComponent is null !");
		return;
	}

	SetRootComponent(SceneComponent);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Box Collider");

	if (!BoxComponent)
	{
		GLog->Log(ELogVerbosity::Error, GetName() + " : Constructor -> BoxComponent is null !");
		return;
	}

	BoxComponent->SetupAttachment(GetRootComponent());

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Static Mesh");

	if (!StaticMeshComponent)
	{
		GLog->Log(ELogVerbosity::Error, GetName() + " : Constructor -> StaticMeshComponent is null !");
		return;
	}

	StaticMeshComponent->SetupAttachment(GetRootComponent());
}

void AA4GPActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
#pragma endregion

#pragma region Protected
void AA4GPActor::BeginPlay()
{
	Super::BeginPlay();
}
#pragma endregion

#pragma region Private
#pragma endregion