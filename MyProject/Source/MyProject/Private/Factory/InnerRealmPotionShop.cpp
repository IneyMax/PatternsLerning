#include "Factory/InnerRealmPotionShop.h"

#include "Factory/InnerRealmHealthPotion.h"
#include "Factory/InnerRealmPowerPotion.h"
#include "Factory/InnerRealmSkillPotion.h"

APotion* UInnerRealmPotionShop::ConcoctPotion(FString PotionSKU)
{
	//Select which potion to spawn depending on the passed string
	if (PotionSKU.Equals("Health")) {
		return	GetWorld()->SpawnActor<AInnerRealmHealthPotion> (AInnerRealmHealthPotion::StaticClass());
	}
	else if (PotionSKU.Equals("Power")) {
		return	GetWorld()->SpawnActor<AInnerRealmPowerPotion> (AInnerRealmPowerPotion::StaticClass());
	}
	else if (PotionSKU.Equals("Skill")) {
		return	GetWorld()->SpawnActor<AInnerRealmSkillPotion> (AInnerRealmSkillPotion::StaticClass());
	}
	else return nullptr; //Return null if the string isn't valid
}
