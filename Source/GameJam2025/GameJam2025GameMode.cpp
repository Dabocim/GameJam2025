// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam2025GameMode.h"
#include "GameJam2025Character.h"
#include "UObject/ConstructorHelpers.h"

AGameJam2025GameMode::AGameJam2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
