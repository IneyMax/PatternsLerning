#pragma once

#include "CoreMinimal.h"
#include "Factory/Potion.h"
#include "InnerRealmSkillPotion.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AInnerRealmSkillPotion : public APotion
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Brew() override;
};
