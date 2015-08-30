// Fill out your copyright notice in the Description page of Project Settings.

#include "RPG.h"
#include "Weapon.h"


// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AWeapon::AWeapon(float ws, int wt, int bd, float cm, int wd, int d ,Quality q, FString &name) : Item(q,name,1,1,false){
	weaponSpeed = ws;
	weaponType = wt;
	baseDamage = bd;
	critModifier = cm;
	weaponDamage = wd;
	durability = d;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

int AWeapon::getMaxStackSize(){
	return 1;
}

int AWeapon::getCount(){
	return 1;
}

bool AWeapon::isItemStackable(){
	return false;
}