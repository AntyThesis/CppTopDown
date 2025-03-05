// Fill out your copyright notice in the Description page of Project Settings.



#include "TestActor.h"
#include "Inventory_COMP.h"


// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	

	UStaticMeshComponent* Mesh = FindComponentByClass <UStaticMeshComponent>();
	UPrimitiveComponent* CollisionBox = FindComponentByClass<UPrimitiveComponent>();


}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



// Define "PickedUp" function
void ATestActor::PickedUp(ACppTopDownCharacter* CharacterPickingUp)
{
	if (CharacterPickingUp)
	{
		UInventory_COMP* Inventory = CharacterPickingUp->GetComponentByClass<UInventory_COMP>();



		if (Inventory)
		{
			if (!Inventory->FullInventory())
			
			{
				UStaticMeshComponent* Mesh = FindComponentByClass <UStaticMeshComponent>();
				UPrimitiveComponent* CollisionBox = FindComponentByClass<UPrimitiveComponent>();

				Mesh->SetVisibility(false);
				Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				CollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}
		}
	}
}