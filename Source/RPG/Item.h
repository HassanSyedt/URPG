// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UnrealString.h"
/**
 * 
 */enum Quality
 {
	 JUNK, NORMAL, RARE, EPIC, UNIQUE, LEGENDARY, ARTIFACT, HACKED
 };
class RPG_API Item
{
public:

	Item();
	Item(Quality q, FString &name, int max, int c, bool s){
		quality = q;
		name = name;
		maxSize = max;
		count = c;
		isStackable = s;
	}
	~Item();


	virtual Quality getQuality();
	virtual FString getName();
	virtual int getMaxStackSize();
	virtual int getCount();
	virtual bool isItemStackable();


protected:
	Quality quality;
	FString *name;
	int maxSize;
	int count;
	bool isStackable;


};
