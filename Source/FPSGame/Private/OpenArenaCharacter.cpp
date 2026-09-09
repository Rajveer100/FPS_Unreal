// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenArenaCharacter.h"

// Sets default values
AOpenArenaCharacter::AOpenArenaCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpenArenaCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpenArenaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOpenArenaCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

