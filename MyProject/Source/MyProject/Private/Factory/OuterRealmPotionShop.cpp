#include "Factory/OuterRealmPotionShop.h"

APotion* UOuterRealmPotionShop::ConcoctPotion(FString PotionSKU)
{
	/*
	//Select which potion to spawn depending on the passed string
	if (PotionSKU.Equals("Health")) {
		return	GetWorld()->SpawnActor<AOuterRealmHealthPotion> (AOuterRealmHealthPotion::StaticClass());
	}
	else if (PotionSKU.Equals("Power")) {
		return	GetWorld()->SpawnActor<AOuterRealmPowerPotion> (AOuterRealmPowerPotion::StaticClass());
	}
	else if (PotionSKU.Equals("Skill")) {
		return	GetWorld()->SpawnActor<AOuterRealmSkillPotion> (AOuterRealmSkillPotion::StaticClass());
	}
	else return nullptr; //Return null if the string isn't valid
	*/
	return nullptr;
}
