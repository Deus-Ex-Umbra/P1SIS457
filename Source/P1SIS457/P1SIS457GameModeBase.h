//Herencia y clase abstracta
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "P1SIS457GameModeBase.generated.h"

UCLASS()
class P1SIS457_API AP1SIS457GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AP1SIS457GameModeBase();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	UPROPERTY()
		class APelota* PelotaBrillosa;
	UPROPERTY()
		class APelota* PelotaRoca;
	UPROPERTY()
		class APelota* PelotaAgua;
	UPROPERTY()
		class APelota* PelotaPequenia;
};
