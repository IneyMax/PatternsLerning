#pragma once

#include "CoreMinimal.h"
#include "AConcreteLodging.h"
#include "UObject/NoExportTypes.h"
#include "Builder/Interface/IBuilder.h"
#include "UConcreteBuilder.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MYPROJECT_API UConcreteBuilder : public UObject, public IBuilder
{
	GENERATED_BODY()

	UConcreteBuilder();

private:
	UPROPERTY(VisibleAnywhere, Category = "ConstructedLodging")
	AActor* Lodging;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ConstructedLodging")
	TSubclassOf<AConcreteLodging> UCurrentLodgingClass = AConcreteLodging::StaticClass();

public:
	//UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildLobbyArea_Implementation() override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildRooms_Implementation() override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual AActor* GetLodging_Implementation() override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void CreateLodging_Implementation() override;
};
