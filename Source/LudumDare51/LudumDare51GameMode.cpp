// Copyright Epic Games, Inc. All Rights Reserved.

#include "LudumDare51GameMode.h"
#include "LudumDare51Character.h"
#include "UObject/ConstructorHelpers.h"

ALudumDare51GameMode::ALudumDare51GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
