#pragma once

#include "CoreMinimal.h"
#include "Potion.h"
#include "InnerRealmHealthPotion.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AInnerRealmHealthPotion : public APotion
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Brew() override;
};
