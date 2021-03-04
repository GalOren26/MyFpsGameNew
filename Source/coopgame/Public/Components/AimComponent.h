// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AimComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class COOPGAME_API UAimComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UAimComponent();

	UFUNCTION()
		void BeginZoom();
	//UFUNCTION()
	void EndZoom();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "FOV", meta = (ClampMin = 0.1, ClampMax = 100.0))
		float SpeedOfChangeFOV;

	UPROPERTY(EditAnywhere, Category = "FOV", meta = (ClampMin = 0.1, ClampMax = 100.0))
		float FinalFov;
	UPROPERTY(EditAnywhere, Category = "FOV", meta = (ClampMin = 0.1, ClampMax = 100.0))
		float DefaultFOV;
	bool WantToZoom;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//
};
