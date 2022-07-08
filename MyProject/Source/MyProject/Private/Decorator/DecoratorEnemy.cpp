// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator/DecoratorEnemy.h"

#include "MyStaticClasses/CheckValidation.h"


// Sets default values
ADecoratorEnemy::ADecoratorEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADecoratorEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADecoratorEnemy::Fight()
{
	if (DecorationEnemy)
	{
		DecorationEnemy->Fight();
	}
}

void ADecoratorEnemy::SetEnemy(ADecoratorEnemy* DecoratedEnemy)
{
	DecorationEnemy = DecoratedEnemy;
}

