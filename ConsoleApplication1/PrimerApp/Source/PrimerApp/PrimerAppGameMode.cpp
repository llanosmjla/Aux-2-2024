// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrimerAppGameMode.h"
#include "PrimerAppHUD.h"
#include "PrimerAppCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrimerAppGameMode::APrimerAppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APrimerAppHUD::StaticClass();
}
