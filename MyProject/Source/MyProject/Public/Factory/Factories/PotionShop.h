#pragma once

#include "CoreMinimal.h"
#include "Factory/FactoryProducts/Potion.h"
#include "UObject/NoExportTypes.h"
#include "PotionShop.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UPotionShop : public UObject
{
	GENERATED_BODY()

public:
	//Create Potion and returns it. It's pure virtual, so it doesn't need an implementation in this class
	virtual	APotion* ConcoctPotion(FString PotionSKU) PURE_VIRTUAL(UPotionShop::ConcoctPotion, return nullptr;);

	//Order, concoct and returns a Potion of a specific Category
	APotion* OrderPotion(FString Category);
};
