// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/SceneComponent.h>
#include <Components/BoxComponent.h>
#include "Components/StaticMeshComponent.h"
#include "A4GPActor.generated.h"

UCLASS()
class COURSUE5_API AA4GPActor : public AActor
{
	GENERATED_BODY()

//==== Fields =====
private:
	//==== Components ====

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneComponent> SceneComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UBoxComponent> BoxComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMeshComponent;
	

//==== Methods ====
public:
	AA4GPActor();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

//private:
//	template<class T>
//	FORCEINLINE void SetUpComponent(const TObjectPtr<T> Component, const TObjectPtr<UActorComponent> Parent = nullptr)
//	{
//		TObjectPtr<UActorComponent> InheritanceCheck = Cast<UActorComponent>(Component);
//
//		if (!InheritanceCheck)
//		{
//			GLog->Log(ELogVerbosity::Error, GetName() + " : SetUpComponent() -> Component does not inherit from UActorComponent !");
//			return;
//		}
//
//		Component = CreateDefaultSubobject<T>(T->GetName());
//
//		if (!Component)
//		{
//			GLog->Log(ELogVerbosity::Error, GetName() + " : Constructor -> BoxComponent is null !");
//			return;
//		}
//
//		BoxComponent->SetupAttachment(GetRootComponent());
//	}
};
