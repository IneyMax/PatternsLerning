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
	virtual void ConstructLodging_Implementation() override;
	
	virtual AActor* GetLodging_Implementation() override;
	
	virtual void SetLodgingBuilder_Implementation(UObject* Builder) override;
};