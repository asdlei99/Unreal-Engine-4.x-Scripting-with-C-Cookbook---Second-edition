// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PostBeginPlay.generated.h"

UINTERFACE(meta = (CannotImplementInterfaceInBlueprint))
class UPostBeginPlay : public UInterface
{
    GENERATED_BODY()
};

/**
 * 
 */
class CHAPTER_07_API IPostBeginPlay
{
    GENERATED_BODY()

    // Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    UFUNCTION(BlueprintCallable, Category = Test)
    virtual void OnPostBeginPlay();
};