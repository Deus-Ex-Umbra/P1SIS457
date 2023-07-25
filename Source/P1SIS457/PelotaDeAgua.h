#pragma once

#include "CoreMinimal.h"
#include "Pelota.h"
#include "PelotaDeAgua.generated.h"

UCLASS()
class P1SIS457_API APelotaDeAgua : public APelota
{
	GENERATED_BODY()
public:
	APelotaDeAgua();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearPelota() override;
	virtual void RotarPelota() override;
};
