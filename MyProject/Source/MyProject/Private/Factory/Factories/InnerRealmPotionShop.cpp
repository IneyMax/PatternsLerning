
#include "Factory/Factories/InnerRealmPotionShop.h"
#include "Factory/FactoryProducts/InnerRealmHealthPotion.h"


APotion* UInnerRealmPotionShop::ConcoctPotion(FString PotionSKU)
{
	//Select which potion to spawn depending on the passed string
	if (PotionSKU.Equals("Health")) {
		return	GetWorld()->SpawnActor<AInnerRealmHealthPotion> (AInnerRealmHealthPotion::StaticClass());
	}
	return nullptr; //Return null if the string isn't valid
}
