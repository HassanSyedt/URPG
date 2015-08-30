// Fill out your copyright notice in the Description page of Project Settings.

#include "RPG.h"
#include "Item.h"

Item::Item()
{
}

Item::~Item()
{
}

Quality Item::getQuality(){
	return quality;
}

FString Item::getName(){
	return *name;
}

int Item::getMaxStackSize(){
	return maxSize;
}

int Item::getCount(){
	return count;
}

bool Item::isItemStackable(){
	return isStackable;
}