#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FactoryMethod_Main.generated.h"

UCLASS()
class MYPROJECT_API AFactoryMethod_Main : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFactoryMethod_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
