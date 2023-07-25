#pragma once

#include "CoreMinimal.h"
#include "Pelota.h"
#include "PelotaPequenia.generated.h"

UCLASS()
class P1SIS457_API APelotaPequenia : public APelota
{
	GENERATED_BODY()
public:
	APelotaPequenia();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearPelota() override;
	virtual void RotarPelota() override;
};
