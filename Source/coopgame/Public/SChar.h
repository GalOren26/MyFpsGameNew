// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "SWeapon.h"
#include "Components/AimComponent.h"
#include "SChar.generated.h"
class UCameraComponent;
UCLASS()
class COOPGAME_API ASChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	/*ASChar();*/

protected:

	// Sets default values
	ASChar();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float Value);
	void MoveRight(float Value);
	void BeginCrouch();
	void EndCrouch();
	UFUNCTION(BlueprintCallable, Category = "weapon")
		virtual void   ChangeWeapon();
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)//cause need to edit
		TArray<TSubclassOf<ASWeapon>> my_weapon; 
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		ASWeapon *CurrentWeapon;
		int CurrentWeaponIdx; 
		void SpawnNewWeapon();
	virtual void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	UAimComponent* AimComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UCameraComponent* GetCameraComp();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};

//typedef struct  FOV  {
//	void BeginZoom();
//	void EndZoom();
//	UPROPERTY(EditAnywhere, Category = "FOV",meta= (ClampMin=0.0,ClampMax=100.0))
//		float SpeedOfChangeFOV; 
//	UPROPERTY(EditAnywhere, Category = "FOV", meta = (ClampMin = 0.0, ClampMax = 100.0))
//		float CurrentFOV;
//	bool WantToZoom; 
//
//};