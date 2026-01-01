// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ABGameState.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	virtual void HandleBeginPlay() override; // 현재 월드에 있는 모든 것들을 Beginplay라고 명령을 내리는 함수. (로컬 기준 서버에서만 실행)
	
	virtual void OnRep_ReplicatedHasBegunPlay() override; //클라이언트에서 원격으로 호출되는 함수? (아 내가 이제 게임을 시작해야 하는구나! 하고 bReplicatedHasBegunPlay 변수가 true로 바뀌었을 때 호출되는 함수
	
};
