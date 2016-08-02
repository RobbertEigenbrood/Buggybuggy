// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileIO.generated.h"
/**
 * 
 */
UCLASS()
class BUGGYBUGGY_API UFileIO : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprintCallable, Category = "FileIO")
		static FString WriteToFile(FString filename, FString content);

		UFUNCTION(BlueprintCallable, Category = "FileIO")
		static void LoadStringFromFile(FString& Result, FString filename);
	
};
