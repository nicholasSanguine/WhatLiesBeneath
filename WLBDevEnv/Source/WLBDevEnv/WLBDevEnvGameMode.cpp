// Copyright Epic Games, Inc. All Rights Reserved.

#include "WLBDevEnvGameMode.h"
#include "WLBDevEnvHUD.h"
#include "WLBDevEnvCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWLBDevEnvGameMode::AWLBDevEnvGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWLBDevEnvHUD::StaticClass();
}
