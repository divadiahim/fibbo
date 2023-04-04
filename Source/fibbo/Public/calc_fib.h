// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "calc_fib.generated.h"

/**
 * 
 */
UCLASS()
class FIBBO_API Ucalc_fib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Print Copy")
		static void fibo(const int &power,const bool &reset, int &out_fib, bool &reached);

};
