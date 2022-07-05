#include "Factory/InnerRealmHealthPotion.h"


void AInnerRealmHealthPotion::BeginPlay()
{
	Super::BeginPlay();
	//Set the ingredients
	PotionName = "Inner Realm Health Potion";
	Gooeyness = "Mucus Like";
	Blood = "Orc Blood";

	//Add the herbs
	Herbs.Add("Root of Inner Realm");
}


void AInnerRealmHealthPotion::Brew()
{
	//Log the brewing type
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, TEXT("Brewing at High Temperature"));
}
