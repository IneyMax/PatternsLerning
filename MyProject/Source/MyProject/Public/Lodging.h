// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorPlan.h"
#include "GameFramework/Actor.h"
#include "Lodging.generated.h"

UCLASS()
class MYPROJECT_API ALodging : public	AActor,	public IFloorPlan
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALodging();

	private:

	//The Swimming Pool's name
	FString SwimmingPool;

	//The Lobby Area's name
	FString LobbyArea;

	//The Rooms's name
	FString Rooms;

	//The Restaurants's name
	FString Restaurants;

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:
	// Called every frame
 
	virtual void Tick(float DeltaTime) override;

	//Set the name of the Swimming Pool
	void SetSwimmingPool(FString mySwimmingPool);

	//Set the name of the Lobby Area
	void SetLobbyArea(FString myLobbyArea);

	//Set the name of the Rooms
	void SetRooms(FString myRooms);

	//Set the name of the Restaurants
	void SetRestaurants(FString myRestaurants);

	//Logs all the Lodging floors
	void LodgingCharacteristics();

};

