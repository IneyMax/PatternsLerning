// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEnemy.h"
#include "GameFramework/Actor.h"
#include "BaseDecoratorEnemy.generated.h"

UCLASS(Abstract)
class MYPROJECT_API ABaseEnemyDecorator : public AActor, public IEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseEnemyDecorator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	IEnemy* DecorationEnemy;
	
public:
	virtual void Fight() override;
	
	void SetEnemy(IEnemy* DecoratedEnemy);
};
