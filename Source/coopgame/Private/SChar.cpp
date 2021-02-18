// Fill out your copyright notice in the Description page of Project Settings.


#include "SChar.h"
#include "Camera/CameraComponent.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/Pawn.h"
ASChar::ASChar()
{
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;// control camere acording to rotation  of the pawn .
												  //SpringArmComp is for third player view. 
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
	this->JumpMaxHoldTime = 0.5;

	// create pawn with weapon 

}
// Called when the game starts or when spawned
void ASChar::BeginPlay()
{
	Super::BeginPlay();

}

void ASChar::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector() * Value);
}

void ASChar::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector() * Value);
}

void ASChar::BeginCrouch()
{
	Crouch();
}

void ASChar::EndCrouch()
{
	UnCrouch();
}

void ASChar::GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const
{
	if (this->CameraComp)
	{
		OutLocation = CameraComp->GetComponentLocation() + CameraComp->GetComponentRotation().Vector() * 10;
		OutRotation = CameraComp->GetComponentRotation();
		
	}
	else
	{
		Super::GetActorEyesViewPoint(OutLocation, OutRotation);
	}
}


// Called every frame
void ASChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

UCameraComponent* ASChar::GetCameraComp()
{
	return this->CameraComp;
}

// Called to bind functionality to input
void ASChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ASChar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASChar::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ASChar::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ASChar::AddControllerYawInput);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASChar::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASChar::EndCrouch);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASChar::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ASChar::StopJumping);
}

