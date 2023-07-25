#include "P1SIS457GameModeBase.h"
#include "Pelota.h"
#include "PelotaBrillosa.h"
#include "PelotaDeRoca.h"
#include "PelotaDeAgua.h"
#include "PelotaPequenia.h"

AP1SIS457GameModeBase::AP1SIS457GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AP1SIS457GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	PelotaBrillosa = GetWorld()->SpawnActor<APelotaBrillosa>();
	PelotaRoca = GetWorld()->SpawnActor<APelotaDeRoca>();
	PelotaAgua = GetWorld()->SpawnActor<APelotaDeAgua>();
	PelotaPequenia = GetWorld()->SpawnActor<APelotaPequenia>();
	PelotaBrillosa->SetActorLocation(FVector(-300.0f, -200.0f, 0));
	PelotaRoca->SetActorLocation(FVector(-300.0f, -100.0f, 0));
	PelotaAgua->SetActorLocation(FVector(-300.0f, 100, 0));
	PelotaPequenia->SetActorLocation(FVector(-300.0f, 200.0f, 0));
}

void AP1SIS457GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
