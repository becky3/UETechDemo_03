// Copyright Epic Games, Inc. All Rights Reserved.

#include "UETechDemo_03GameMode.h"
#include "UETechDemo_03Character.h"
#include "UObject/ConstructorHelpers.h"

AUETechDemo_03GameMode::AUETechDemo_03GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
