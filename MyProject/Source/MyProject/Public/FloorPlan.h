// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FloorPlan.generated.h"

/**
 * 
 */

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFloorPlan : public UInterface
{
	GENERATED_BODY()
};

class MYPROJECT_API IFloorPlan
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:

	//The pure virtual functions of the FloorPlan
	virtual void SetSwimmingPool(FString SwimmingPool) = 0; virtual void SetLobbyArea(FString LobbyArea) = 0;
	virtual void SetRooms(FString Rooms) = 0;
	virtual void SetRestaurants(FString Restaurants) = 0;
};


