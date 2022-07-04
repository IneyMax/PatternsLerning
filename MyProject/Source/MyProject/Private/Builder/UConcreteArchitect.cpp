#pragma once

#include "Builder/UConcreteArchitect.h"
#include "Builder/Interface/IBuilder.h"
#include "MyStaticClasses/CheckValidation.h"


UConcreteArchitect::UConcreteArchitect()
{
	UE_LOG(LogTemp, Warning, TEXT("Construct: %s"), *this->GetName());
}


void UConcreteArchitect::ConstructLodging_Implementation()
{
	if (UCheckValidation::CheckValidationAndInterface(CurrentBuilder, UBuilder::StaticClass()))
	{
		IBuilder::Execute_BuildRooms(CurrentBuilder);
		IBuilder::Execute_BuildLobbyArea(CurrentBuilder);
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("NOT constructed Lodging!"));
}


AActor* UConcreteArchitect::GetLodging_Implementation()
{
	if (UCheckValidation::CheckValidationAndInterface(CurrentBuilder, UBuilder::StaticClass()))
	{
		return IBuilder::Execute_GetLodging(CurrentBuilder);
	}
	UE_LOG(LogTemp, Error, TEXT("NOT constructed Lodging!"));
	
	return nullptr;
}


void UConcreteArchitect::SetLodgingBuilder_Implementation(UObject* Builder)
{
	if (UCheckValidation::CheckValidationAndInterface(Builder, UBuilder::StaticClass()))
	{
		CurrentBuilder = Builder;
		IBuilder::Execute_CreateLodging(Builder);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor %s not have Builder Interface"), *Builder->GetName());
	}
}