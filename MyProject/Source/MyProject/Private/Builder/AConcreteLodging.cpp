#pragma once

#include "Builder/AConcreteLodging.h"

// Sets default values
AConcreteLodging::AConcreteLodging()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AConcreteLodging::BeginPlay()
{
	Super::BeginPlay();
	
}

void AConcreteLodging::SetLobbyArea_Implementation(const FString& LobbyArea)
{
	_LobbyArea = LobbyArea;
}

void AConcreteLodging::SetRooms_Implementation(const FString& Rooms)
{
	_Rooms = Rooms;
}

void AConcreteLodging::SetRestaurants_Implementation(const FString& Restaurants)
{
	_Restaurants = Restaurants;
}



