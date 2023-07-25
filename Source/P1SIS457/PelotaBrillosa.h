#pragma once

#include "CoreMinimal.h"
#include "Pelota.h"
#include "PelotaBrillosa.generated.h"

UCLASS()
class P1SIS457_API APelotaBrillosa : public APelota
{
	GENERATED_BODY()
public:
	APelotaBrillosa();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearPelota() override;
	virtual void RotarPelota() override;
};
