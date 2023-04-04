// Fill out your copyright notice in the Description page of Project Settings.


#include "act.h"

// Sets default values
Aact::Aact()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aact::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aact::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

