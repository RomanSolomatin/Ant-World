// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_EnemyAttack.generated.h"

/**
 * 
 */
UCLASS()
class TCC_API UBTTask_EnemyAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlackboarKeyName")
	FName TargetKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlackboarKeyName")
	FName FoundTargetKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlackboarKeyName")
	FName LocationKeyName;
};
