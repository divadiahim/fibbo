// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "calc_fib.generated.h"

/**
 * 
 */
UCLASS()
class FIBBO_API Ucalc_fib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Print Copy")
		static void fibo(const int &power, int &out_fib);



	
};
