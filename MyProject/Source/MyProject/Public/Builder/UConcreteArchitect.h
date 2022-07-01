#pragma once

#include "Interface/IArchitect.h"
#include "CoreMinimal.h"
#include "UConcreteBuilder.h"
#include "UConcreteArchitect.generated.h"

UCLASS()
class MYPROJECT_API UConcreteArchitect: public UObject, public IArchitect
{
	GENERATED_BODY()

public:
	UConcreteArchitect();

private:
	UPROPERTY()
	UConcreteBuilder* CurrentBuilder;
	
	// IBuilder* BuilderInterface; TODO: May be add?

public:
	//UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual void ConstructLodging_Implementation() override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual void SetLodgingBuilder_Implementation(UConcreteBuilder* Builder) override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual AConcreteLodging* GetLodging_Implementation() override;
};