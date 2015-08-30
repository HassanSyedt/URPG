// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Item.h"
#include "Armour.generated.h"

enum Resistances{
	RES1,RES2,RES3,RES4,RES5
};

UCLASS()
class RPG_API AArmour : public AActor, public Item
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmour();
	AArmour(int ac, int at, int bd, float am, Resistances r, int d, Quality q, FString &name);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	virtual int getMaxStackSize()override;
	virtual int getCount()override;
	virtual bool isItemStackable()override;

protected:
	int armourClass;
	int armourType;
	int baseDefense;
	float armourModifier;
	Resistances res;
	int durability;
	
	
};
