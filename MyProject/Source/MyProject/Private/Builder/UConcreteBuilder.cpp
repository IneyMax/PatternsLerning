#pragma once

#include "Builder/UConcreteBuilder.h"

UConcreteBuilder::UConcreteBuilder()
{

	UE_LOG(LogTemp, Warning, TEXT("UConcreteBuilder::Construct"));
	/*
	Lodging	= GetWorld()->SpawnActor<AConcreteLodging>(AConcreteLodging::StaticClass());
	if (IsValid(Lodging))
	{
		GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Builder creating: /n %s"), *Lodging->GetName()));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Lodging not create in Builder!"));
	}
	*/
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

AConcreteLodging* UConcreteBuilder::GetLodging_Implementation()
{
	if (IsValid(Lodging))
	{
		return Lodging;
	}
	return nullptr;
}