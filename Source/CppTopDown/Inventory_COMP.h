// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestActor.h"
#include "Inventory_COMP.generated.h"


// Forward declare dispatchers
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemRemoved);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPTOPDOWN_API UInventory_COMP : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory_COMP();


	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<ATestActor*> Inventory;



	// Declare Dispactchers
	UPROPERTY(BlueprintAssignable)
	FOnItemAdded OnItemAdded;

	UPROPERTY(BlueprintAssignable)
	FOnItemRemoved OnItemRemoved;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(ATestActor* ItemToBeAdded);

	UFUNCTION(BlueprintCallable)
	void RemoveItemFromInventory(ATestActor* ItemToBeRemoved);
};
