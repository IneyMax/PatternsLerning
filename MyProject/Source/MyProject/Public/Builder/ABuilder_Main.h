#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABuilder_Main.generated.h"

UCLASS()
class MYPROJECT_API ABuilder_Main : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "MainBuilder")
	class UConcreteBuilder* UCurrentBuilder;

	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "MainBuilder")
	class UConcreteArchitect* UCurrentArchitect;
};
