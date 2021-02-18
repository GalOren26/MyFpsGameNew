// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "FPSProjectile.h"
#include "SChar.h"
#include "Camera/CameraComponent.h"
#include "MySWeapon.generated.h"
/**
 *
 */
UCLASS()
class COOPGAME_API AMySWeapon : public ASWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties

	AMySWeapon();
protected:

	/** Projectile class to spawn */
	UPROPERTY(EditAnyWhere, Category = "Projectile")// need it in order to spawn th bp and not the projectile himslef.
		TSubclassOf<AFPSProjectile> ProjectileClass;
	// inhere mesh from ASWeapon
	virtual void BeginPlay() override;
	/*UFUNCTION(BlueprintCallable, Category = "weapon")*/ // put callable only in father 
	virtual void   Fire();

};


