// Fill out your copyright notice in the Description page of Project Settings.


#include "UConcreteBuilder.h"

#include "AConcreteLodging.h"

UUConcreteBuilder::UUConcreteBuilder()
{
}

void UUConcreteBuilder::BuildLobbyArea_Implementation()
{
	
}

void UUConcreteBuilder::BuildRooms_Implementation()
{
	
}

void UUConcreteBuilder::BuildRestaurants_Implementation()
{

}

AActor* UUConcreteBuilder::GetLodging_Implementation()
{
	return IBuilder::GetLodging_Implementation();
}

void UUConcreteBuilder::PostLoad()
{
	Super::PostLoad();
	// TODO CreateDefaultSubobject<AAConcreteLodging::StaticClass()>();
}
