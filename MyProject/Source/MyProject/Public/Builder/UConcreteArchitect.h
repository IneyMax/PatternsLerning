#pragma once

#include "Interface/IArchitect.h"
#include "CoreMinimal.h"
#include "Interface/IBuilder.h"
#include "UConcreteArchitect.generated.h"

UCLASS()
class MYPROJECT_API UConcreteArchitect: public UObject, public IArchitect
{
	GENERATED_BODY()

public:
	UConcreteArchitect();

private:
	IBuilder* CurrentBuilder;

public:
	UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual void ConstructLodging_Implementation() override;

	UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual void SetLodgingBuilder_Implementation(UObject* Builder) override;

	UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual AConcreteLodging* GetLodging_Implementation() override;

private:
	virtual void PostLoad() override;
};