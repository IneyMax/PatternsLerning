#pragma once

#include "Builder/ABuilder_Main.h"

// Sets default values
ABuilder_Main::ABuilder_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABuilder_Main::BeginPlay()
{
	Super::BeginPlay();
	
}
