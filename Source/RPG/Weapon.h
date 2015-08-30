// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Item.h"
#include "Weapon.generated.h"

UCLASS()
class RPG_API AWeapon : public AActor, public Item
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	AWeapon(float ws, int wt, int bd, float cm, int wd, int d, Quality q, FString &name);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	virtual int getMaxStackSize()override;
	virtual int getCount()override;
	virtual bool isItemStackable()override;

protected:
	float weaponSpeed;
	int weaponType;
	int baseDamage;
	float critModifier;
	int weaponDamage;
	int durability;
};
