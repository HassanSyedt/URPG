// Fill out your copyright notice in the Description page of Project Settings.

#include "RPG.h"
#include "Consumable.h"


// Sets default values
AConsumable::AConsumable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AConsumable::AConsumable(Quality q, FString &name, int max, int c, bool s) :Item(q,name,max,c,s){

}

// Called when the game starts or when spawned
void AConsumable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConsumable::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

