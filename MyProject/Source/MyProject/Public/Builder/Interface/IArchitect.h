#pragma once

#include "CoreMinimal.h"
#include "Builder/AConcreteLodging.h"
#include "IArchitect.generated.h"


UINTERFACE(Blueprintable, BlueprintType)
class UArchitect: public UInterface
{
	GENERATED_BODY()
};


class MYPROJECT_API IArchitect
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IArchitect)
	void ConstructLodging();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IArchitect)
	void SetLodgingBuilder(UObject* Builder);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IArchitect)
	AConcreteLodging* GetLodging();
};