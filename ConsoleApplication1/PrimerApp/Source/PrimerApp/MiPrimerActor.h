// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiPrimerActor.generated.h"

UCLASS()
class PRIMERAPP_API AMiPrimerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	

	// Sets default values for this actor's properties
	AMiPrimerActor();

	//Crear Escenas de componentes - Scene Components 

	UPROPERTY(VisibleAnywhere)
	USceneComponent* PadreSceneComponent;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* HijoSceneComponent;

	//Crear un componente - Mesh Component
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PadreMeshComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* HijoMeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
