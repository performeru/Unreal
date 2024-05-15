// Fill out your copyright notice in the Description page of Project Settings.


#include "MovePlatform.h"

// Sets default values
AMovePlatform::AMovePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovePlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

}

// Called every frame
void AMovePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 움직이기
		// 현재 위치 가지고 옴
	FVector CurrentLocation = GetActorLocation();
		// 위치에 백터 추가
	CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);

		// 위치 설정
	SetActorLocation(CurrentLocation);

	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);
		// 반대 방향으로 전환
	if(DistanceMoved > MoveDistance)
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + (MoveDirection * MoveDistance);
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;

	}



}

