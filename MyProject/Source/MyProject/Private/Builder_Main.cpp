#include "Builder_Main.h"
#include "HotelLodgingBuilder.h"
#include "ArchitecturalEngineer.h"
#include "Lodging.h"

ABuilder_Main::ABuilder_Main()
{
}

void ABuilder_Main::BeginPlay()
{
	Super::BeginPlay();
	
	//Spawn Builder and Engineer
	HotelBuilder	=	GetWorld()->SpawnActor<AHotelLodgingBuilder> (AHotelLodgingBuilder::StaticClass());
	Engineer	=	GetWorld()->SpawnActor<AArchitecturalEngineer> (AArchitecturalEngineer::StaticClass());

	//Set the Builder for the Engineer and create the buildings
	Engineer->SetLodgingBuilder(HotelBuilder);
	Engineer->ConstructLodging();

	//Get the Engineer's Lodging and Logs the created buildings
	ALodging* Lodging = Engineer->GetLodging();
	Lodging->LodgingCharacteristics();
	
}

// Called every frame
void ABuilder_Main::Tick(float DeltaTime)
 
{
	Super::Tick(DeltaTime);

}


