// Fill out your copyright notice in the Description page of Project Settings.


#include "MySWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "particles/ParticleSystem.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/KismetMathLibrary.h"



AMySWeapon::AMySWeapon()
{

}

void AMySWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void AMySWeapon::Fire()
{
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		FVector SocketLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
		//UE_LOG(LogTemp, Warning, TEXT("Im Here1 "));
		FVector CamLocation;// not used. 
		FRotator CamRotation;
		MyOwner->GetActorEyesViewPoint(CamLocation, CamRotation);
		/*FVector TraceEnd = CamLocation + CamRotation.Vector() * 10000;
		FRotator RotOfProjecTile= FindLookAtRotation*/
		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		// spawn the projectile at the muzzle

		// get camera comp 
		UCameraComponent* MyCam = Cast<ASChar>(GetOwner())->GetCameraComp(); 

		GetWorld()->SpawnActor<AFPSProjectile>(ProjectileClass, SocketLocation, CamRotation, ActorSpawnParams);
	}
}
