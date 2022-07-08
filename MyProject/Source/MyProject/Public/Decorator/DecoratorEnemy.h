// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEnemy.h"
#include "GameFramework/Actor.h"
#include "DecoratorEnemy.generated.h"

UCLASS()
class MYPROJECT_API ADecoratorEnemy : public AActor, public IEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADecoratorEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	virtual void Fight() override;
	
	void SetEnemy(ADecoratorEnemy* DecoratedEnemy);
	
private:
	IEnemy* DecorationEnemy;
};
