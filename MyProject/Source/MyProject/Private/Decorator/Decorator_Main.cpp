// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator/Decorator_Main.h"

#include "Decorator/AConcreteEnemy.h"
#include "Decorator/AMeleeEnemy.h"


// Sets default values
ADecorator_Main::ADecorator_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ADecorator_Main::BeginPlay()
{
	Super::BeginPlay();
	
	//Spawn a Concrete Enemy
	AConcreteEnemy* ConcreteEnemy = GetWorld()->SpawnActor<AConcreteEnemy>(AConcreteEnemy::StaticClass());
	ConcreteEnemy->Fight();
	
}

