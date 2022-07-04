#pragma once

#include "CoreMinimal.h"
#include "UConcreteArchitect.h"
#include "UConcreteBuilder.h"
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
	
	//The Builder Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainBuilder")
	TSubclassOf<UConcreteBuilder> UCurrentBuilderClass = UConcreteBuilder::StaticClass();

	//The Engineer Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainBuilder")
	TSubclassOf<UConcreteArchitect> UCurrentArchitectClass = UConcreteArchitect::StaticClass();
};
