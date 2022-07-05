#pragma once

#include "CoreMinimal.h"
#include "Factory/PotionShop.h"
#include "OuterRealmPotionShop.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UOuterRealmPotionShop : public UPotionShop
{
	GENERATED_BODY()
	
	virtual APotion* ConcoctPotion(FString PotionSKU) override;
};
