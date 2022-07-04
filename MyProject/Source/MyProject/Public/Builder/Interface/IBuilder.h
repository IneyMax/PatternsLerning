#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBuilder.generated.h"


UINTERFACE(Blueprintable, MinimalAPI)
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
	AActor* GetLodging();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IBuilder)
	void CreateLodging();
};