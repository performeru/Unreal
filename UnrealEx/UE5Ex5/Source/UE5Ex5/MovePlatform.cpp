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

}

// Called every frame
void AMovePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 현재 위치 가지고 옴
	FVector CurrentLocation = GetActorLocation();
		// 위치에 백터 추가
	CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);

	// 위치 설정
	SetActorLocation(CurrentLocation);


}

