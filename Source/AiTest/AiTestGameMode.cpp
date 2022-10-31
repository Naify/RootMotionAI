// Copyright Epic Games, Inc. All Rights Reserved.

#include "AiTestGameMode.h"
#include "AiTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAiTestGameMode::AAiTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
