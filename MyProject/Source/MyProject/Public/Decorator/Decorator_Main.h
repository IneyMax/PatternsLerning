// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEnemy.h"
#include "GameFramework/Actor.h"
#include "Decorator_Main.generated.h"

UCLASS()
class MYPROJECT_API ADecorator_Main : public AActor
{
	GENERATED_BODY()

public:
	IEnemy* Enemy;
	
public:	
	// Sets default values for this actor's properties
	ADecorator_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
