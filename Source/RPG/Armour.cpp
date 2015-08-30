// Fill out your copyright notice in the Description page of Project Settings.

#include "RPG.h"
#include "Armour.h"


// Sets default values
AArmour::AArmour()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AArmour::AArmour(int ac, int at, int bd, float am, Resistances r, int d, Quality q, FString &name) :Item(q,name,1,1,false){
	armourClass = ac;
	armourType = at;
	baseDefense = bd;
	armourModifier = am;
	res = r;
	durability = d;
}

// Called when the game starts or when spawned
void AArmour::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmour::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

int AArmour::getMaxStackSize(){
	return 1;
}

int AArmour::getCount(){
	return 1;
}

bool AArmour::isItemStackable(){
	return false;
}