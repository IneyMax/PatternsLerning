#include "Factory/PotionShop.h"

APotion* UPotionShop::OrderPotion(FString Category)
{
	//Create the Potion and log its name
	APotion* Potion = ConcoctPotion(Category);
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Concocting %s"), *Potion->GetPotionName()));

	//Start the concoct process
	Potion->Boil();
	Potion->Bubble();
	Potion->Brew();
	Potion->Bottle();

	//Returns the created potion
	return Potion;
}
