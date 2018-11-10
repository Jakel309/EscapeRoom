// Fill out your copyright notice in the Description page of Project Settings.

#include "LevitatingRock.h"

#include "BuildingEscape.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
ULevitatingRock::ULevitatingRock()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULevitatingRock::BeginPlay()
{
	Super::BeginPlay();

	/*AActor* Object = GetOwner();

	FVector NewLocation = FVector(0.f, 0.f, 500.f);
	Object->SetActorLocation(NewLocation);*/
	
}


// Called every frame
void ULevitatingRock::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

