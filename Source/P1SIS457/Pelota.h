#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pelota.generated.h"

UCLASS(Abstract)
class P1SIS457_API APelota : public AActor
{
	GENERATED_BODY()	
public:	
	APelota();
	USceneComponent* SceneComponent;
	UPROPERTY()
		class UStaticMeshComponent* PelotaMesh;
	UPROPERTY()
		class UMaterial* PelotaMaterial;
	UPROPERTY()
		FVector Escala;
protected:
	virtual void BeginPlay() override;
	float tiempo = 0.0f;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void CrearPelota() PURE_VIRTUAL(APelota::CrearPelota, );
	virtual void RotarPelota() PURE_VIRTUAL(APelota::RotarPelota, );
};
