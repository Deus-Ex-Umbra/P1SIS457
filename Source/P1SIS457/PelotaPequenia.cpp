#include "PelotaPequenia.h"

APelotaPequenia::APelotaPequenia()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	PelotaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PelotaMesh"));
	RootComponent = PelotaMesh;
	PelotaMesh->SetStaticMesh(Mesh.Object);
	PelotaMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	Escala = FVector(0.1f, 0.1f, 0.1f);
}

void APelotaPequenia::BeginPlay()
{
	Super::BeginPlay();
	CrearPelota();
}

void APelotaPequenia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (tiempo >= 0.4f) {
		RotarPelota();
		tiempo = 0.0f;
	}
	tiempo += DeltaTime;
}

void APelotaPequenia::CrearPelota()
{
	PelotaMesh->SetMaterial(0, PelotaMaterial);
	PelotaMesh->SetRelativeScale3D(Escala);
	PelotaMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	PelotaMesh->SetRelativeRotation(FRotator(FRotator::ZeroRotator));
}

void APelotaPequenia::RotarPelota()
{
	auto Rotacion = this->GetActorRotation();
	Rotacion += FRotator(5.0f, 5.0f, 5.0f);
	if (Rotacion.Pitch >= 179.0f || Rotacion.Yaw >= 85.0f || Rotacion.Roll >= 179.0f)
	{
		Rotacion.Pitch = 0.0f;
		Rotacion.Yaw = 0.0f;
		Rotacion.Roll = 0.0f;
	}
	this->SetActorRotation(Rotacion);
}
