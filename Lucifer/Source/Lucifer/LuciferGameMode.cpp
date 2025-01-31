// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuciferGameMode.h"
#include "LuciferCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuciferGameMode::ALuciferGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
