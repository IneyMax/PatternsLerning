// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LodgingBuilder.h"
#include "GameFramework/Actor.h"
#include "ArchitecturalEngineer.generated.h"

UCLASS()
class MYPROJECT_API AArchitecturalEngineer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AArchitecturalEngineer();

private:

	//The Builder Actor, that must be a LodgingBuilder
	ILodgingBuilder* LodgingBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creates the buildings
	void ConstructLodging();

	//Set the Builder Actor
	void SetLodgingBuilder(AActor* Builder);

	//Get the Lodging of the Builder class
	ALodging* GetLodging();
};

