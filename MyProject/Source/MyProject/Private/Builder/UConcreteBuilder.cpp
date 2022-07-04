#pragma once

#include "Builder/UConcreteBuilder.h"
#include "Builder/AConcreteLodging.h"
#include "Builder/Interface/ILodging.h"


UConcreteBuilder::UConcreteBuilder()
{
	UE_LOG(LogTemp, Warning, TEXT("Construct: %s"), *this->GetName());
}

void UConcreteBuilder::BuildLobbyArea_Implementation()
{
	ILodging* LodgingInterface = Cast<ILodging>(Lodging);
	if (LodgingInterface)
	{
		//Set the Lobby Area of the Lodging
		LodgingInterface->Execute_SetLobbyArea(Lodging, "Grand Hall");
		return;
	}

	UE_LOG(LogTemp, Error, TEXT("BuildLobbyArea(): Lodging is NULL, make sure it's initialized."));
}


void UConcreteBuilder::BuildRooms_Implementation()
{
	ILodging* LodgingInterface = Cast<ILodging>(Lodging);
	if (LodgingInterface)
	{
		//Set the Rooms of the Lodging
		LodgingInterface->Execute_SetRooms(Lodging, "Luxury Suites");
		return;
	}

	UE_LOG(LogTemp, Error, TEXT("BuildRooms(): Lodging is NULL, make sure it's initialized."));

}


AActor* UConcreteBuilder::GetLodging_Implementation()
{
	if (IsValid(Lodging))
	{
		return Lodging;
	}
	return nullptr;
}


void UConcreteBuilder::CreateLodging_Implementation()
{
	Lodging	= GetWorld()->SpawnActor<AConcreteLodging>(UCurrentLodgingClass);
}
