#pragma once

#include "AConcreteLodging.h"

// Sets default values
AAConcreteLodging::AAConcreteLodging()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AAConcreteLodging::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAConcreteLodging::SetLobbyArea_Implementation(const FString& LobbyArea)
{
	_LobbyArea = LobbyArea;
}

void AAConcreteLodging::SetRooms_Implementation(const FString& Rooms)
{
	_Rooms = Rooms;
}

void AAConcreteLodging::SetRestaurants_Implementation(const FString& Restaurants)
{
	_Restaurants = Restaurants;
}



