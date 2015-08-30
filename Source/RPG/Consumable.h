// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Item.h"
#include "Consumable.generated.h"

UCLASS()
class RPG_API AConsumable : public AActor, public Item
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConsumable();
	AConsumable(Quality q, FString &name, int max, int c, bool s);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

//needs a Buff[]
	
};
