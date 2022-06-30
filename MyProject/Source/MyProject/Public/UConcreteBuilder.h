// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IBuilder.h"
#include "UObject/NoExportTypes.h"
#include "UConcreteBuilder.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UUConcreteBuilder : public UObject, public IBuilder
{
	GENERATED_BODY()

	UUConcreteBuilder();

private:
	UPROPERTY(VisibleAnywhere, Category = "Hotel Lodging")
	class AActor* Lodging;
	
public:
	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildLobbyArea_Implementation() override;

	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildRooms_Implementation() override;

	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual void BuildRestaurants_Implementation() override;

	UFUNCTION(BlueprintCallable, Category=ConcreteBuilder)
	virtual AActor* GetLodging_Implementation() override;
	
	virtual void PostLoad() override;
};
