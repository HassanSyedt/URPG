// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "ConsumableInterface.generated.h"

/**
 * 
 */
UINTERFACE()
class RPG_API UConsumableInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
	
};


class IConsumableInterface{

	GENERATED_IINTERFACE_BODY()

public:
	virtual void consume();


};