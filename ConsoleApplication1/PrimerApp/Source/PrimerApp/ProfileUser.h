// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProfileUser.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PRIMERAPP_API UProfileUser : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float HealthMax;
	
};
