// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

void AFPSProjectile::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerExplossion, this, &AFPSProjectile::explode, 0.5f, false);

}
//void AFPSProjectile::Tick(float DeltaSeconds)
//{
//	Super::Tick(DeltaSeconds);
//	if (IsPendingKill())
//	{
//		UE_LOG(LogTemp,Warning,TEXT("Pending"))
//	}
//	else
//	{
//		UE_LOG(LogTemp,Warning,TEXT("Not Pending"))
//	}
//}
//#include "Containers/Array.h"
void AFPSProjectile::explode()
{
		float DamgeVal = 20.0f;
		float raious = 300.0f;
		TArray  <AActor*> MyIgnoers = { this };
		// do explosion effect
		UParticleSystemComponent* explode  = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, this->GetActorLocation());
		//apply radial damage 
		UGameplayStatics::ApplyRadialDamage(GetWorld(), DamgeVal, this->GetActorLocation(), raious, DamageType, MyIgnoers);
		//  draw debug spher
		DrawDebugSphere(GetWorld(), this->GetActorLocation(), raious, 20, FColor::Yellow, false,2,4);
		
		//UE_LOG(LogTemp, Warning, TEXT("Im Here1  "));

		Destroy();
		
}

AFPSProjectile::AFPSProjectile()
{
	// Use a sphere as a simple collision representation
	//PrimaryActorTick.bCanEverTick = true;

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



