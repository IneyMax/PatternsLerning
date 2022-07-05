#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CheckValidation.generated.h"

UCLASS(Blueprintable)
class MYPROJECT_API UCheckValidation: public UObject
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable, Category=CheckValidation)
	static bool CheckValidationAndInterface(UObject* TestableObject, TSubclassOf<UInterface> TestableInterface)
	{
		if (IsValid(TestableObject) && TestableInterface != NULL)
		{
			if (TestableInterface->IsChildOf(UInterface::StaticClass()))
			{
				return TestableObject->GetClass()->ImplementsInterface(TestableInterface);
			}
		}
		return false;
	}
};