// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator/MeleeEnemyDecorator.h"


AMeleeEnemyDecorator::AMeleeEnemyDecorator()
{
	
}

void AMeleeEnemyDecorator::Fight()
{
	DecorationEnemy->Fight();
	UE_LOG(LogTemp, Warning, TEXT("AMeleeEnemyDecorator Fight: %s"), *this->GetName());
}
