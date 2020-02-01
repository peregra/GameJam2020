// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MagnetGameMode.h"
#include "MagnetHUD.h"
#include "MagnetCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagnetGameMode::AMagnetGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	// DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMagnetHUD::StaticClass();
}
