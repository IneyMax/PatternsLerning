#pragma once

#include "CoreMinimal.h"
#include "ILodging.generated.h"


UINTERFACE(Blueprintable, BlueprintType)
class ULodging: public UInterface
{
	GENERATED_BODY()
};


class MYPROJECT_API ILodging
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=ILodging)
	void SetLobbyArea(const FString& LobbyArea);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=ILodging)
	void SetRooms(const FString& Rooms);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=ILodging)
	void SetRestaurants(const FString& Restaurants);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=ILodging)
	void PrintToLogLodgingCharacteristics();
};


	/*

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=Lodging)
	void SetLobbyArea(FString LArea);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=Lodging)
	void SetRooms(FString Rooms);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=Lodging)
	void SetRestaurants(FString Restaurants);
	*/
