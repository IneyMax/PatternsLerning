// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator/BaseEnemy.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseEnemy::Fight()
{
	UE_LOG(LogTemp, Warning, TEXT("ABaseEnemy Fight: %s"), *this->GetName());
}

