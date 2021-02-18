// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

void AFPSProjectile::BeginPlay()
{
	GetWorldTimerManager().SetTimer(TimerExplossion, this, &AFPSProjectile::explode, 3.0f, false);
}
//#include "Containers/Array.h"
void AFPSProjectile::explode()
{
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		float DamgeVal = 20.0f;
		float raious = 5.0f;
		TArray  <AActor*> MyIgnoers = { this,MyOwner };
		UGameplayStatics::ApplyRadialDamage(GetWorld(), DamgeVal, this->GetActorLocation(), raious, DamageType, MyIgnoers, this, MyOwner->GetInstigatorController());
		UE_LOG(LogTemp, Warning, TEXT("Im Here1 "));
		this->Destroy();
	}
}

AFPSProjectile::AFPSProjectile()
{
	// Use a sphere as a simple collision representation

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));

	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;
	InitialLifeSpan = 3.0f;
	//UPrimitiveComponent::IgnoreActorWhenMoving()
	// Die after 3 seconds by default
	//GetWorldTimerManager().ClearTimer(TimerExplossion);

	//InitialLifeSpan = 3.0f;
	//SetReplicates(true);
	//SetReplicateMovement(true);
}



