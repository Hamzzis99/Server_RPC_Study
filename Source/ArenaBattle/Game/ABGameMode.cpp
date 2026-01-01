// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"
#include "ABGameMode.h"

#include "ArenaBattle.h"
#include "Player/ABPlayerController.h"
#include "Game/ABGameState.h"

AABGameMode::AABGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Engine.Blueprint'/Game/ArenaBattle/Blueprint/BP_ABCharacterPlayer.BP_ABCharacterPlayer_C'"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
	
	GameStateClass = AABGameState::StaticClass(); // 게임 모드에서 사용할 게임 상태 클래스 설정
}

void AABGameMode::OnPlayerDead()
{

}

// 로그인 관련 함수들
void AABGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("Begin"));
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("End"));
}

// 로그인 관련 함수들
APlayerController* AABGameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("Begin"));
	
	APlayerController* NewPlayerController =  Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("End"));
	return NewPlayerController;
	
}

// 로그인 관련 함수들
void AABGameMode::PostLogin(class APlayerController* NewPlayer)
{
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("Begin"));
	Super::PostLogin(NewPlayer);
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("End"));
}

// 로그인 관련 함수들
void AABGameMode::StartPlay()
{
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("Begin"));
	Super::StartPlay();
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("End"));
}
