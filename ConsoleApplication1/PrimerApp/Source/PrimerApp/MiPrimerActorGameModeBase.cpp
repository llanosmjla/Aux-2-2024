// Fill out your copyright notice in the Description page of Project Settings.


#include "MiPrimerActorGameModeBase.h"
#include "MiPrimerActor.h"

void AMiPrimerActorGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// Mostar un mensaje en la pantalla por 20 segundos
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Hello World, this is MiPrimerActorGameModeBase!"));

	// Crear un nuevo actor en el mundo y una localización predeterminada
	FTransform SpawnLocation;

	SpawnedMiPrimerActor = GetWorld()->SpawnActor<AMiPrimerActor>(AMiPrimerActor::StaticClass(), SpawnLocation);


	// Destruir el actor después de 5 segundos
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AMiPrimerActorGameModeBase::DestroyMiPrimerActorFunction, 10, false);

}

void AMiPrimerActorGameModeBase::DestroyMiPrimerActorFunction()
{
	if (SpawnedMiPrimerActor != nullptr)
	{
		// Mostrar un mensaje en la pantalla
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Destroying MiPrimerActor!"));
		SpawnedMiPrimerActor->Destroy();
	}
}

