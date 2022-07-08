// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoratorEnemy.h"
#include "AMeleeEnemy.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMeleeEnemy : public ADecoratorEnemy
{
	GENERATED_BODY()

	AMeleeEnemy();

	virtual void Fight() override;
};
