// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClockTower.generated.h"

UCLASS()
class MYPROJECT_API AClockTower : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AClockTower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
