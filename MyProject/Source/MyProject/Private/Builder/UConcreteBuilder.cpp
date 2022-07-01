#pragma once

#include "Builder/UConcreteBuilder.h"
#include "Builder/Interface/IBuilder.h"

UConcreteBuilder::UConcreteBuilder()
{
}

void UConcreteBuilder::BuildLobbyArea_Implementation()
{
	if (!Lodging)
	{
		UE_LOG(LogTemp, Error, TEXT("BuildLobbyArea(): Lodging is NULL, make sure it's initialized."));
		return;
	}

	//Set the Lobby Area of the Lodging
	Lodging->SetLobbyArea("Grand Hall");

}

void UConcreteBuilder::BuildRooms_Implementation()
{
	if (!Lodging)
	{
		UE_LOG(LogTemp, Error, TEXT("BuildRooms(): Lodging is NULL, make sure it's initialized."));
		return;
	}

	//Set the Rooms of the Lodging
	Lodging->SetRooms("Luxury Suites");

}

void UConcreteBuilder::BuildRestaurants_Implementation()
{
	if (!Lodging)
	{
		UE_LOG(LogTemp, Error, TEXT("BuildRestaurants(): Lodging is NULL, make sure it's initialized."));
		return;
	}

	//Set the Restaurants of the Lodging
	Lodging->SetRestaurants("5 star Buffet");

}

AConcreteLodging* UConcreteBuilder::GetLodging_Implementation()
{
	return Lodging;
}

void UConcreteBuilder::PostLoad()
{
	Super::PostLoad();
	Lodging	= GetWorld()->SpawnActor<AConcreteLodging> (AConcreteLodging::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("%s Created"), *this->GetName()));
}
