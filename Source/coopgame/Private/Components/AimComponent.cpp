// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\Components\AimComponent.h"
#include "Camera/CameraComponent.h"
#include "..\..\Public\SChar.h"
// Sets default values for this component's properties
UAimComponent::UAimComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UAimComponent::BeginZoom()
{
	WantToZoom = true;
	//UE_LOG(LogTemp, Warning, TEXT("Im here zoom ! "));
}

void UAimComponent::EndZoom()
{
	WantToZoom = false;
}

// Called when the game starts
void UAimComponent::BeginPlay()
{
	Super::BeginPlay();
 	//FinalFov = 60; 
	//DefaultFOV = 90; 
	//SpeedOfChangeFOV = 20; 
	// ...
	
}


// Called every frame
void UAimComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//TSubclassOf< UCameraComponent> CameraClass; 
	UCameraComponent* camera=Cast<ASChar>(GetOwner())->GetCameraComp();
	float TargetFOV = WantToZoom ? FinalFov : DefaultFOV;
	float NewFOV = FMath::FInterpTo(camera->FieldOfView, TargetFOV, DeltaTime, SpeedOfChangeFOV);
	camera->SetFieldOfView(NewFOV);
	// ...
}

