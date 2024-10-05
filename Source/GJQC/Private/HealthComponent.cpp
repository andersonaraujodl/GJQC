// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

float UHealthComponent::GetCurrentHealth() const
{
	return Health;
}

void UHealthComponent::SetSanityBarProgress(float const value)
{

}

//void UHealthComponent::Damage(ACharacter* victim, float damage, ACharacter* attacker)
//{
//	//Calculate Damage
//	if (damage <= 0) return;
//	Health -= damage;
//
//	UE_LOG(LogTemp, Warning, TEXT("Health: %f", Health));
//}
//
//void UHealthComponent::Heal(float healingAmount)
//{
//	//Heal
//
//	Health += healingAmount;
//}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

