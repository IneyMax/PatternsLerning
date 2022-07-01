#pragma once

#include "Builder/ABuilder_Main.h"
#include "Builder/UConcreteArchitect.h"
#include "Builder/UConcreteBuilder.h"

// Sets default values
ABuilder_Main::ABuilder_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	UCurrentBuilder = CreateDefaultSubobject<UConcreteBuilder>("ConcreteBuilder");
	UCurrentArchitect = CreateDefaultSubobject<UConcreteArchitect>("ConcreteArchitect");
}

// Called when the game starts or when spawned
void ABuilder_Main::BeginPlay()
{
	Super::BeginPlay();
	
	IArchitect* ArchitectInterface = Cast<IArchitect>(UCurrentArchitect);
	if (ArchitectInterface)
	{
		// Set the Builder for the Engineer and create the buildings
		ArchitectInterface->Execute_SetLodgingBuilder(UCurrentArchitect, UCurrentBuilder);
		ArchitectInterface->Execute_ConstructLodging(UCurrentArchitect);

		/*
		// Get the Engineer's Lodging
		AConcreteLodging* Lodging = UCurrentArchitect->Execute_GetLodging(this);

		if (IsValid(Lodging))
		{
			ILodging* LodgingInterface = Cast<ILodging>(Lodging);
			if (LodgingInterface)
			{
				// Logs the created buildings
				LodgingInterface->Execute_PrintToLogLodgingCharacteristics(Lodging);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Lodging NULL"));
		}
		*/
	}
}
