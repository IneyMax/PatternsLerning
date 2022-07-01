#pragma once

#include "Builder/UConcreteBuilder.h"
#include "Builder/Interface/IBuilder.h"

UConcreteBuilder::UConcreteBuilder()
{
}

void UConcreteBuilder::BuildLobbyArea_Implementation()
{
	
}

void UConcreteBuilder::BuildRooms_Implementation()
{
	
}

void UConcreteBuilder::BuildRestaurants_Implementation()
{

}

AActor* UConcreteBuilder::GetLodging_Implementation()
{
	return IBuilder::GetLodging_Implementation();
}

void UConcreteBuilder::PostLoad()
{
	Super::PostLoad();
	// TODO CreateDefaultSubobject<AAConcreteLodging::StaticClass()>();
}
