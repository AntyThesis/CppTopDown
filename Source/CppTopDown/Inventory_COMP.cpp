// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory_COMP.h"

// Sets default values for this component's properties
UInventory_COMP::UInventory_COMP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventory_COMP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventory_COMP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



void UInventory_COMP::AddItemToInventory(ATestActor* ItemToBeAdded)
{
	if (Inventory.Num() < 6)
	{
		Inventory.Add(ItemToBeAdded);
		OnItemAdded.Broadcast();
	}
	else(GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Inventory Full")));
}



void UInventory_COMP::RemoveItemFromInventory(ATestActor* ItemToBeRemoved)
{
	if (Inventory.Num() == 0)
	{
		Inventory.RemoveSingle(ItemToBeRemoved);
		OnItemRemoved.Broadcast();
	}
	else (GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("InventoryEmpty")));
}
