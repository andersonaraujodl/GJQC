// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Flashlight.generated.h"

UCLASS()
class GJQC_API AFlashlight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlashlight();

protected:
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* FlashlightMesh;

	UPROPERTY(EditDefaultsOnly)
	class USpotLightComponent* SpotlightComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

};
