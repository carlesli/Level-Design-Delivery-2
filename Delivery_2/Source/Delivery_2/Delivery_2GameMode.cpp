// Copyright Epic Games, Inc. All Rights Reserved.

#include "Delivery_2GameMode.h"
#include "Delivery_2Character.h"
#include "UObject/ConstructorHelpers.h"

ADelivery_2GameMode::ADelivery_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
