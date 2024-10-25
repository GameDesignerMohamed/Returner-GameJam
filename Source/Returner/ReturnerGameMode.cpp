// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReturnerGameMode.h"
#include "ReturnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReturnerGameMode::AReturnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
