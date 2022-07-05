
#include "Factory/FactoryMethod_Main.h"

#include "Factory/Factories/InnerRealmPotionShop.h"
#include "Factory/Factories/PotionShop.h"
#include "Factory/FactoryProducts/Potion.h"


// Sets default values
AFactoryMethod_Main::AFactoryMethod_Main()
{
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AFactoryMethod_Main::BeginPlay()
{
	Super::BeginPlay();
	
	//Create the Shops
	UPotionShop* InnerRealmShop	= NewObject<UInnerRealmPotionShop>(this, UInnerRealmPotionShop::StaticClass());
	//APotionShop* OuterRealmShop	= NewObject<UOuterRealmPotionShop>(this, UOuterRealmPotionShop::StaticClass());

	APotion* Potion;
	
	//Create an Inner Health Potion and log its name
	Potion = InnerRealmShop->OrderPotion("Health");
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	/*
	//Create an Inner Health Potion and log its name
	Potion = InnerRealmShop->OrderPotion("Health");
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));
 
	//Create an Outer Power Potion and log its name
	Potion = OuterRealmShop->OrderPotion("Power");
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	//Create an Inner Health Potion and log its name
	Potion = InnerRealmShop->OrderPotion("Power");
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	//Create an Outer Skill Potion and log its name
	Potion = OuterRealmShop->OrderPotion("Skill");
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	//Create an Inner Health Potion and log its name
	Potion = InnerRealmShop->OrderPotion("Skill");
	GEngine->AddOnScreenDebugMessage(-1,	15.f,	FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));
	*/
}

