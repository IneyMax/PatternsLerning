#pragma once

#include "CoreMinimal.h"
#include "AConcreteLodging.h"
#include "Interface/IBuilder.h"
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
	virtual void CreateLodging_Implementation() override;
	
	virtual void BuildLobbyArea_Implementation() override;
	
	virtual void BuildRooms_Implementation() override;
	
	virtual AActor* GetLodging_Implementation() override;
};
