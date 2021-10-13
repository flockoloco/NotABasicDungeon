// Fill out your copyright notice in the Description page of Project Settings.


#include "Game_Character.h"

// Sets default values
AGame_Character::AGame_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGame_Character::BeginPlay()
{
	Super::BeginPlay();

	check(GEngine != nullptr);	
}

// Called every frame
void AGame_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGame_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up "movement" bindings.
	PlayerInputComponent->BindAxis("MoveVertical", this, &AGame_Character::MoveVertical);
	PlayerInputComponent->BindAxis("MoveHorizontal", this, &AGame_Character::MoveHorizontal);

}

void AGame_Character::MoveVertical(float Value) {

	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AGame_Character::MoveHorizontal(float Value) {

	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

