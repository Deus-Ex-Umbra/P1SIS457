#include "Pelota.h"

APelota::APelota()
{
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = SceneComponent;
}

void APelota::BeginPlay()
{
	Super::BeginPlay();
}

void APelota::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

