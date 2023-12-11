// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealUIGameMode.h"
#include "UnrealUICharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealUIGameMode::AUnrealUIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
