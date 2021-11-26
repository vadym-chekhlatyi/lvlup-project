// Fill out your copyright notice in the Description page of Project Settings.


#include "ATrigger.h"

// Sets default values
AATrigger::AATrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AATrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AATrigger::SpawnSpheres() 
{
	
	return;
}

