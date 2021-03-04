// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "particles/ParticleSystem.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "DrawDebugHelpers.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "../coopgame.h"
#include "GameFramework/Actor.h"
// Sets default values

static int32 DebugWeaponDrawing;
FAutoConsoleVariableRef  CVARDebugWeraponDrawing(
	TEXT("Coop.debug"),
	DebugWeaponDrawing,
	TEXT("Draw Debug Lines For Weapon "),
	ECVF_Cheat);

ASWeapon::ASWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	SmokeTarget = "Target";
	MuzzleSocketName = "MuzzleSocket";
	BaseDamge = 20;
}

// Called when the game starts or when spawned
//void ASWeapon::BeginPlay()
//{
//	Super::BeginPlay();
//
//}


void ASWeapon::Fire()
{
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("Im Here Fire"));
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		FVector TraceEnd = EyeLocation + EyeRotation.Vector() * 10000;
		FVector ShotDirection = EyeRotation.Vector();
		FVector DestOfSmoke = TraceEnd;
		FCollisionQueryParams params;
		params.AddIgnoredActor(MyOwner);
		params.AddIgnoredActor(this);
		params.bTraceComplex = true;
		params.bReturnPhysicalMaterial = true;
		FHitResult Hit;
		float ActualDamge = BaseDamge;
		if (GetWorld()->LineTraceSingleByChannel(Hit , EyeLocation, TraceEnd, Weapon_trace, params))
		{
			//DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Red, true, 0, 0, 3);
			DestOfSmoke = Hit.ImpactPoint;
			AActor* HitActor = Hit.GetActor();

			//setup the effects to play 
			EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
			UParticleSystem* SelectedEffect = nullptr;
			if (SurfaceType == SURFACE_FLESHVULNRABLE)
			{
				ActualDamge = BaseDamge * 4.0f; 

			}
			UE_LOG(LogTemp, Warning, TEXT("gal %d"), SurfaceType);
			switch (SurfaceType)
			{
				case SURFACE_FLESHFAULT:
				case SURFACE_FLESHVULNRABLE:
					SelectedEffect = FleshImpactEffect;
					break;
				default:
					SelectedEffect = DefaultImpactEffect; 
					break;
			}

			UGameplayStatics::ApplyPointDamage(HitActor, ActualDamge, ShotDirection, Hit, MyOwner->GetInstigatorController(), this, DamageType);
			if (SelectedEffect)
			{
				/*UE_LOG(LogTemp, Warning, TEXT("Im Here1 ") );*/
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
			}

		}
		//DrawDebugSphere(GetWorld(),Hit.Location,5.0f,12,FCollor::Yellow,)
		//DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Black, false , 3.0f, 3.0f, 3.0f);

		if (SmokeBeamEffect)
		{
			FVector SocketLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
			UParticleSystemComponent* smoke = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SmokeBeamEffect, SocketLocation);
			UE_LOG(LogTemp, Warning, TEXT("Im Here1 "));
			if (smoke)
			{
				UE_LOG(LogTemp, Warning, TEXT("Im Here2 "));
				smoke->SetVectorParameter(SmokeTarget, DestOfSmoke);
			}
		}
		if (MuzzleEffect)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Im Here2 "));
			UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);

		}
		if (DebugWeaponDrawing)
		{
			FVector SocketLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
			DrawDebugLine(GetWorld(), SocketLocation, TraceEnd, FColor::Red, true, 0, 0, 3);
		}

		// shake camera 
		APawn *CurrentPawn = Cast<APawn>(MyOwner);
		APlayerController* PlayerController = Cast< APlayerController>(CurrentPawn->GetController());
		PlayerController->ClientPlayCameraShake(FireShake);

	}
}

void ASWeapon::StartFire()
{
	GetWorldTimerManager.s
}

void ASWeapon::StopFire()
{

}


//// Called every frame
//void ASWeapon::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
