#pragma once

#include "Builder/UConcreteArchitect.h"

UConcreteArchitect::UConcreteArchitect()
{
}

void UConcreteArchitect::ConstructLodging_Implementation()
{
	//Creates the buildings
	CurrentBuilder->BuildLobbyArea();
	CurrentBuilder->BuildRooms();
	CurrentBuilder->BuildRestaurants();
}

void UConcreteArchitect::SetLodgingBuilder_Implementation(UObject* Builder)
{
	//Cast the passed Actor and set the Builder
	CurrentBuilder = Cast<IBuilder>(Builder);

	if (!Builder) //Log Error if cast fails
		{
			GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
			UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not a LodgingBuilder! Are you sure that the Actor implements	that interface?"));
		}
}

AConcreteLodging* UConcreteArchitect::GetLodging_Implementation()
{
	return CurrentBuilder->GetLodging();
}

void UConcreteArchitect::PostLoad()
{
	Super::PostLoad();
	FString s = this->GetName();
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("%s Created"), *this->GetName()));
}
