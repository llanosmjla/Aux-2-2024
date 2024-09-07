// Fill out your copyright notice in the Description page of Project Settings.


#include "MiPrimerActor.h"

// Sets default values
AMiPrimerActor::AMiPrimerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	///Crear una scena con el scena primer escena y escena hijo
	PadreSceneComponent = CreateDefaultSubobject<USceneComponent>("PadreSceneComponent");
	HijoSceneComponent = CreateDefaultSubobject<USceneComponent>("HijoSceneComponent");

	// Crear un componente de malla que sirve como raíz del actor osea como el componente principal donde se le asigna una malla para que se pueda visualizar en el mundo
	// una malla es un objeto 3D que se puede visualizar en el mundo como un cubo, esfera, cilindro, etc.
	PadreMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("PadreMeshComponent"); // primer componente de malla
	HijoMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("HijoMeshComponent"); // segundo componente de malla


	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	auto MeshAsset2 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	auto MaterialAsset = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/pared.pared'"));

	if (MeshAsset.Succeeded() && MeshAsset2.Succeeded()) {
		PadreMeshComponent->SetStaticMesh(MeshAsset.Object);
		PadreMeshComponent->SetMaterial(0, MaterialAsset.Object);
		HijoMeshComponent->SetStaticMesh(MeshAsset2.Object);
		HijoMeshComponent->SetMaterial(0, MaterialAsset.Object);
	}

	//Construir la jerarquia para mostrar los componentes en  el mundo
	RootComponent = PadreSceneComponent;

	//Creamos la vinculaciones 
	PadreMeshComponent->AttachToComponent(PadreSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);
	HijoMeshComponent->AttachToComponent(HijoSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);

	HijoSceneComponent->AttachToComponent(PadreSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);

	HijoSceneComponent->SetRelativeTransform(FTransform(FRotator(0, 1, 0), FVector(0, 80, 80), FVector(1)));


}

// Called when the game starts or when spawned
void AMiPrimerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMiPrimerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

