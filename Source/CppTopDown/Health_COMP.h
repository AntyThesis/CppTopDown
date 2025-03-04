// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health_COMP.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPTOPDOWN_API UHealth_COMP : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealth_COMP();



	// Declare Health variables
	UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	float CurrentHealth = 0;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float MaxHealth = 100.f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
