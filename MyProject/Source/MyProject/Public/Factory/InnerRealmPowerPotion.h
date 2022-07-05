#pragma once

#include "CoreMinimal.h"
#include "Factory/Potion.h"
#include "InnerRealmPowerPotion.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AInnerRealmPowerPotion : public APotion
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Brew() override;
};
