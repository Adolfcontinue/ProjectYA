// Copyright Epic Games, Inc. All Rights Reserved.


#include "ClientGameModeBase.h"
#include "SocketInstance.h"
#include "SocketActor.h"

AClientGameModeBase::AClientGameModeBase()
{
	FRotator rotator;
	ASocketActor* SpawnedActor1 = (ASocketActor*)GetWorld()->SpawnActor(ASocketActor::StaticClass());
}

void AClientGameModeBase::BeginPlay()
{
	USocketInstance* GameInstance = Cast<USocketInstance>(GetGameInstance());

	int t = 1;

	t = 4;
}
