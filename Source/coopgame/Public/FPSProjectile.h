// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSProjectile.generated.h"


class UProjectileMovementComponent;
class USphereComponent;


UCLASS()
class COOPGAME_API AFPSProjectile : public AActor
{
	GENERATED_BODY()

protected:
	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Projectile")
	USphereComponent* CollisionComp;
	
	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovement;
	// timer for explision 
	virtual void BeginPlay() override;
	/*virtual void Tick(float DeltaSeconds);*/
	FTimerHandle  TimerExplossion;
	UFUNCTION()
		void explode();

	//damage 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Weapon")
		TSubclassOf<UDamageType> DamageType;
	// explosion effect 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Weapon")
		UParticleSystem* ImpactEffect;

public:

	AFPSProjectile();

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

