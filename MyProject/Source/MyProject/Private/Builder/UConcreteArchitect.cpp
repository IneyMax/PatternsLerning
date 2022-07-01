#pragma once

#include "Builder/UConcreteArchitect.h"

UConcreteArchitect::UConcreteArchitect()
{
	UE_LOG(LogTemp, Warning, TEXT("UConcreteArchitect::Construct"));
}

void UConcreteArchitect::ConstructLodging_Implementation()
{
	IBuilder* BuilderInterface = Cast<IBuilder>(CurrentBuilder);
	if (BuilderInterface)
	{
		BuilderInterface->Execute_BuildRooms(CurrentBuilder);
		BuilderInterface->Execute_BuildLobbyArea(CurrentBuilder);
		return;
	}

	UE_LOG(LogTemp, Error, TEXT("NOT constructed Lodging!"));
}

AConcreteLodging* UConcreteArchitect::GetLodging_Implementation()
{
	IBuilder* BuilderInterface = Cast<IBuilder>(CurrentBuilder);
	if (BuilderInterface)
	{
		return BuilderInterface->Execute_GetLodging(CurrentBuilder);
	}
	
	UE_LOG(LogTemp, Error, TEXT("NOT constructed Lodging!"));
	
	return nullptr;
}


void UConcreteArchitect::SetLodgingBuilder_Implementation(UConcreteBuilder* Builder)
{
	if (IsValid(Builder))
	{
		IBuilder* BuilderInterface = Cast<IBuilder>(Builder);
		if (BuilderInterface)
		{
			CurrentBuilder = Builder;
			// TODO: Create self Lodging
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not a Builder or not have Builder Interface"));
	}
}
