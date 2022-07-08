// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEnemy.h"
#include "GameFramework/Actor.h"
#include "AConcreteEnemy.generated.h"

UCLASS()
class MYPROJECT_API AConcreteEnemy : public AActor, public IEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcreteEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	virtual void Fight() override;
};
