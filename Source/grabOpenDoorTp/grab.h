// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Class/Script/Engine.Actor"
#include "grab.generated.h"

UCLASS()
class GRABOPENDOORTP_API Agrab : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Agrab();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	float Reach = 100.f;

	UPROPERTY()
		UPhysicsHandleComponent* PhysicsHandle = nullptr;
	UPROPERTY()
		UInputComponent* InputComponent = nullptr;

	void Grab();
	void Release();
	void FindPhysicsHandle();
	void SetupInputComponent();

	//Return the first actor within reach with physcis body
	FHitResult GetFirstPhysicsBodyInReach() const;

	//Return the line trace end
	FVector GetPlayersReach() const;

	//Get players Position in World
	FVector GetPlayersWorldPos() const;

};
