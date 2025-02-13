// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ_2025GameMode.h"
#include "GGJ_2025Character.h"
#include "UObject/ConstructorHelpers.h"

AGGJ_2025GameMode::AGGJ_2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
