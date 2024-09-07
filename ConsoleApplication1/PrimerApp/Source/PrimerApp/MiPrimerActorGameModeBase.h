// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MiPrimerActor.h"
#include "MiPrimerActorGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PRIMERAPP_API AMiPrimerActorGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UPROPERTY()
	AMiPrimerActor* SpawnedMiPrimerActor;

	UFUNCTION()
	void DestroyMiPrimerActorFunction();
	
};
