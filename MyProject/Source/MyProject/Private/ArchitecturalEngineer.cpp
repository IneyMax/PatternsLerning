// Fill out your copyright notice in the Description page of Project Settings.


#include "ArchitecturalEngineer.h"
#include "Lodging.h"


AArchitecturalEngineer::AArchitecturalEngineer()
{
}

void AArchitecturalEngineer::BeginPlay()
{
	Super::BeginPlay();
}

void AArchitecturalEngineer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AArchitecturalEngineer::SetLodgingBuilder(AActor* Builder)
{
	//Cast the passed Actor and set the Builder LodgingBuilder = Cast<ILodgingBuilder>(Builder);

	if (!LodgingBuilder) //Log Error if cast fails
		{
		GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not	a	LodgingBuilder!	Are	you	sure	that	the	Actor	implements	that interface?"));
		}
}


ALodging* AArchitecturalEngineer::GetLodging()
{
	if (LodgingBuilder)
	{
		//Returns the Lodging of the Builder
		return LodgingBuilder->GetLodging();
	}

	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr")); return nullptr;
}


void AArchitecturalEngineer::ConstructLodging()
{
	//Log if the Builder is NULL
	if (!LodgingBuilder) { UE_LOG(LogTemp, Error, TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized.")); return; }

	//Creates the buildings
	LodgingBuilder->BuildSwimmingPool();
	LodgingBuilder->BuildLobbyArea();
	LodgingBuilder->BuildRooms();
	LodgingBuilder->BuildRestaurants();
}


