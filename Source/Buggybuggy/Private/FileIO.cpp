// Fill out your copyright notice in the Description page of Project Settings.

#include "Buggybuggy.h"
#include "FileIO.h"
#include "Runtime/Core/Public/Misc/CoreMisc.h"

FString UFileIO::WriteToFile(FString filename, FString content)
{
	FString fname = "";
	FString path = FPaths::GameContentDir();
	FString filePath = path + "\\" + filename;
		
	FFileHelper::SaveStringToFile(content, *filePath);;
	return path;
}

void UFileIO::LoadStringFromFile(FString& Result, FString filename)
{
	FString fname = "";
	FString path = FPaths::GameContentDir();
	FString filePath = path + "\\" + filename;
	FFileHelper::LoadFileToString(Result, *filePath);
}
