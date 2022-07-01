#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Builder/AConcreteLodging.h"
#include "Builder/UConcreteBuilder.h"
#include "IArchitect.generated.h"


UINTERFACE(Blueprintable, MinimalAPI)
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
	void SetLodgingBuilder(UConcreteBuilder* Builder);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=IArchitect)
	AConcreteLodging* GetLodging();
};