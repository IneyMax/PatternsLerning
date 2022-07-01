#pragma once

#include "CoreMinimal.h"
#include "IBuilder.generated.h"


UINTERFACE(Blueprintable, BlueprintType)
class UBuilder: public UInterface
{
	GENERATED_BODY()
};


class MYPROJECT_API IBuilder
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IBuilder)
	void BuildLobbyArea();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IBuilder)
	void BuildRooms();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IBuilder)
	void BuildRestaurants();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IBuilder)
	AConcreteLodging* GetLodging();
};