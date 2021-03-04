// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"
class UParticleSystem;
UCLASS()
class COOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASWeapon();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Comoponents")
		USkeletalMeshComponent* MeshComp;
	UFUNCTION(BlueprintCallable,Category="weapon")
		 virtual void   Fire();
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,category="Weapon")
	TSubclassOf<UDamageType> DamageType;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, category = "Weapon")
	FName MuzzleSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Weapon")
	UParticleSystem *MuzzleEffect;// muzzle flash from the weapon 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Weapon")
	UParticleSystem* DefaultImpactEffect;// fire effect 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Weapon")
		UParticleSystem* FleshImpactEffect;// blood effect 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Weapon")
		UParticleSystem* SmokeBeamEffect;// create smoke from weapon 
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, category = "Weapon")
		FName SmokeTarget;//name of target of the smoke 
	UPROPERTY(EditAnywhere, Category = "Weapon")
		TSubclassOf<UCameraShake> FireShake;
	UPROPERTY(EditAnywhere, Category = "Weapon")
		float  BaseDamge; 

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
