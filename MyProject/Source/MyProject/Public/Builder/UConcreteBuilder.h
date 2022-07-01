#pragma once

#include "CoreMinimal.h"
#include "AConcreteLodging.h"
#include "UObject/NoExportTypes.h"
#include "Builder/Interface/IBuilder.h"
#include "UConcreteBuilder.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UConcreteBuilder : public UObject, public IBuilder
{
	GENERATED_BODY()

	UConcreteBuilder();

private:
	UPROPERTY(VisibleAnywhere, Category = "Hotel Lodging")
	class AConcreteLodging* Lodging;
	
public:
	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildLobbyArea_Implementation() override;

	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildRooms_Implementation() override;

	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildRestaurants_Implementation() override;

	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual AConcreteLodging* GetLodging_Implementation() override;

private:
	virtual void PostLoad() override;
};
