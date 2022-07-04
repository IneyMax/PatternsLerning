#pragma once

#include "Builder/AConcreteLodging.h"

// Sets default values
AConcreteLodging::AConcreteLodging()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	UE_LOG(LogTemp, Warning, TEXT("Construct: %s"), *this->GetName());
}

// Called when the game starts or when spawned
void AConcreteLodging::BeginPlay()
{
	Super::BeginPlay();
	FString s = this->GetName();
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("%s Created"), *this->GetName()));
}

void AConcreteLodging::SetLobbyArea_Implementation(const FString& LobbyArea)
{
	_LobbyArea = LobbyArea;
}

void AConcreteLodging::SetRooms_Implementation(const FString& Rooms)
{
	_Rooms = Rooms;
}


void AConcreteLodging::PrintToLogLodgingCharacteristics_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("%s"), *_LobbyArea));
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("%s"), *_Rooms));
}



