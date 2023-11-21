// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestGameMode.h"
#include "GitTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitTestGameMode::AGitTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
