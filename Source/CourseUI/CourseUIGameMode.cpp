// Copyright Epic Games, Inc. All Rights Reserved.

#include "CourseUIGameMode.h"
#include "CourseUIHUD.h"
#include "CourseUICharacter.h"
#include "UObject/ConstructorHelpers.h"

ACourseUIGameMode::ACourseUIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACourseUIHUD::StaticClass();
}
