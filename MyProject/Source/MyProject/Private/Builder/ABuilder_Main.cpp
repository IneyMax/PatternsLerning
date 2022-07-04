#pragma once

#include "Builder/ABuilder_Main.h"
#include "MyStaticClasses/CheckValidation.h"


// Sets default values
ABuilder_Main::ABuilder_Main()
{
	PrimaryActorTick.bCanEverTick = false;
}


// Called when the game starts or when spawned
void ABuilder_Main::BeginPlay()
{
	Super::BeginPlay();
	
	UConcreteArchitect* UCurrentArchitect = NewObject<UConcreteArchitect>(this, UCurrentArchitectClass);
	UConcreteBuilder* UCurrentBuilder = NewObject<UConcreteBuilder>(this, UCurrentBuilderClass);
	
	if (UCheckValidation::CheckValidationAndInterface(UCurrentArchitect, UArchitect::StaticClass()))
		{
		if (UCheckValidation::CheckValidationAndInterface(UCurrentBuilder, UBuilder::StaticClass()))
			{
			IArchitect::Execute_SetLodgingBuilder(UCurrentArchitect, UCurrentBuilder);
			IArchitect::Execute_ConstructLodging(UCurrentArchitect);
		
			AActor* NewLodging = IArchitect::Execute_GetLodging(UCurrentArchitect);
			if (UCheckValidation::CheckValidationAndInterface(NewLodging, ULodging::StaticClass()))
				{
					ILodging::Execute_PrintToLogLodgingCharacteristics(NewLodging);
				}
			
			NewLodging->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
			}
		}
}