#pragma once

#include "CoreMinimal.h"
#include "Builder/Interface/ILodging.h"
#include "GameFramework/Actor.h"
#include "AConcreteLodging.generated.h"

UCLASS()
class MYPROJECT_API AConcreteLodging : public AActor, public ILodging
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AConcreteLodging();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "LodgingParameters")
	FString _LobbyArea {"Test Area"};

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "LodgingParameters")
	FString _Rooms { "Test Rooms" };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	//UFUNCTION(BlueprintCallable, Category=ConcreteLodging)
	virtual void SetLobbyArea_Implementation(const FString& LobbyArea) override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteLodging)
	virtual void SetRooms_Implementation(const FString& Rooms) override;

	//UFUNCTION(BlueprintCallable, Category=ConcreteLodging)
	virtual void PrintToLogLodgingCharacteristics_Implementation() override;
};


