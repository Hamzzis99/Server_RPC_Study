// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define LOG_CALLINFO ANSI_TO_TCHAR (__FUNCTION__) // 언제 로그가 찍혔는지 알려주는 것?

// UELOG를 대체할 매크로? 궁금한데? 로그 카테고리, 로그레벨, 포맷, 가변인자 
// 출력 예시 : LogABNetwork: AABPlayerController::BeginPlay Begin
#define AB_LOG(LogCate, Verbosity, Format, ...) UE_LOG(LogCate, Verbosity, TEXT("%s %s"), LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__)) // 처음 보는 매크로 형식인데?

DECLARE_LOG_CATEGORY_EXTERN(LogABNetwork, Log, All);