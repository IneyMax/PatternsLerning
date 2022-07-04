#pragma once

#include "Builder/ABuilder_Main.h"

#include "Builder/UConcreteArchitect.h"
#include "Builder/UConcreteBuilder.h"
#include "Builder/Interface/ILodging.h"


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
	
	if (IsValid(UCurrentArchitect))
	{
		IArchitect* ArchitectInterface = Cast<IArchitect>(UCurrentArchitect);
		if (ArchitectInterface)
		{
			if (IsValid(UCurrentBuilder))
			{
				IBuilder* BuilderInterface = Cast<IBuilder>(UCurrentBuilder);
				if (BuilderInterface)
				{
					ArchitectInterface->Execute_SetLodgingBuilder(UCurrentArchitect, UCurrentBuilder);
					ArchitectInterface->Execute_ConstructLodging(UCurrentArchitect);
					AActor* NewLodging = ArchitectInterface->Execute_GetLodging(UCurrentArchitect);
					if (IsValid(NewLodging))
					{
						ILodging* LodgingInterface = Cast<ILodging>(NewLodging);
						if (LodgingInterface)
						{
							LodgingInterface->Execute_PrintToLogLodgingCharacteristics(NewLodging);
						}
						NewLodging->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Not find Builder Interface in %s"), *UCurrentBuilder->GetName());
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("%s not valid!"), *UCurrentBuilder->GetName());
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Not find Architect Interface in %s"), *UCurrentArchitect->GetName());
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s not valid!"), *UCurrentArchitect->GetName());
	}

}