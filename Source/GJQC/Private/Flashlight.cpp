// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashlight.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFlashlight::AFlashlight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	
}

// Called when the game starts or when spawned
void AFlashlight::BeginPlay()
{
	Super::BeginPlay();
	
}


