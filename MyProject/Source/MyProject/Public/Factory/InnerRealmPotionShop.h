#pragma once

#include "CoreMinimal.h"
#include "Factory/PotionShop.h"
#include "InnerRealmPotionShop.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UInnerRealmPotionShop : public UPotionShop
{
	GENERATED_BODY()

public:
	//Concoct the selected potion
	virtual APotion* ConcoctPotion(FString PotionSKU) override;
};
