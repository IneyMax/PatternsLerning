// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseDecoratorEnemy.h"
#include "MeleeEnemyDecorator.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMeleeEnemyDecorator : public ABaseEnemyDecorator
{
	GENERATED_BODY()

	AMeleeEnemyDecorator();

	virtual void Fight() override;
};
