// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	//int32 VisibleAnywhereInt;

	//UPROPERTY(EditAnywhere)
	//int32 EditAnywhereInt;

	//UPROPERTY(VisibleInstanceOnly)
	//int32 VisibleInstanceOnlyInt;

	//UPROPERTY(VisibleDefaultsOnly)
	//int32 VisibleDefaultsOnlyInt;

	//UPROPERTY(EditDefaultsOnly)
	//int32 EditDefaulsOnlyInt;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	float Speed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* m_Collider{};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* m_BaseMesh{};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* m_TurretMesh{};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Modifiers", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* m_ProjectileSpawnPoint{};
};
