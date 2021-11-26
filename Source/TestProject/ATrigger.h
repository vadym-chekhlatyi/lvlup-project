// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ATrigger.generated.h"

UCLASS()
class TESTPROJECT_API AATrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SpawnSpheres();

	UPROPERTY(EditAnywhere, meta = (ClampMin = "0", ClampMax = "100", UIMin = "0", UIMax = "100"))
	int sphereMaxCount;

	UPROPERTY(EditAnywhere, meta = (ClampMin = "0", UIMin = "0"))
	int sphereMinLifetime;

	UPROPERTY(EditAnywhere, meta = (ClampMin = "0", UIMin = "0"))
	int sphereMaxLifetime;

	UPROPERTY(EditAnywhere, meta = (ClampMin = "0", UIMin = "0"))
	float sphereRespawnTime;

	float sphereLifeime;

	UPROPERTY(EditAnywhere)
	UActor sphere;

	UPROPERTY(EditAnywhere)
	UBoxComponent* boxComponent;
};
