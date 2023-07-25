#pragma once

#include "CoreMinimal.h"
#include "Pelota.h"
#include "PelotaDeRoca.generated.h"

UCLASS()
class P1SIS457_API APelotaDeRoca : public APelota
{
	GENERATED_BODY()
public:
	APelotaDeRoca();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearPelota() override;
	virtual void RotarPelota() override;
};
