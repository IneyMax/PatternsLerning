#pragma once

#include "Interface/IArchitect.h"
#include "CoreMinimal.h"
#include "UConcreteArchitect.generated.h"

UCLASS(Blueprintable)
class MYPROJECT_API UConcreteArchitect: public UObject, public IArchitect
{
	GENERATED_BODY()

public:
	UConcreteArchitect();

private:
	UPROPERTY()
	UObject* CurrentBuilder;

public:
	//UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual void ConstructLodging_Implementation() override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual AActor* GetLodging_Implementation() override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteArchitect)
	virtual void SetLodgingBuilder_Implementation(UObject* Builder) override;
};