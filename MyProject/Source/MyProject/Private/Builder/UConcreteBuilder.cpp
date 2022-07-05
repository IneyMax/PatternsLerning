#include "Builder/UConcreteBuilder.h"
#include "MyStaticClasses/CheckValidation.h"


UConcreteBuilder::UConcreteBuilder()
{
	// UE_LOG(LogTemp, Warning, TEXT("Construct: %s"), *this->GetName());
}


void UConcreteBuilder::CreateLodging_Implementation()
{
	Lodging	= GetWorld()->SpawnActor<AConcreteLodging>(UCurrentLodgingClass);
}


void UConcreteBuilder::BuildLobbyArea_Implementation()
{
	if (UCheckValidation::CheckValidationAndInterface(Lodging, ULodging::StaticClass()))
	{
		//Set the Lobby Area of the Lodging
		ILodging::Execute_SetLobbyArea(Lodging, "Grand Hall");
		return;
	}

	UE_LOG(LogTemp, Error, TEXT("BuildLobbyArea(): Lodging is NULL, make sure it's initialized."));
}


void UConcreteBuilder::BuildRooms_Implementation()
{
	if (UCheckValidation::CheckValidationAndInterface(Lodging, ULodging::StaticClass()))
	{
		//Set the Rooms of the Lodging
		ILodging::Execute_SetRooms(Lodging, "Luxury Suites");
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

