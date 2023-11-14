// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"

#define BUF_SIZE 65535

/**
 * 
 */
class CLIENT_API ClientSocket : public FRunnable
{
public:
	ClientSocket();
	~ClientSocket();

private:
	
private:
	FSocket* _socket;
	bool	 _isconnect= false;

	FRunnableThread* Thread;


public:
	void CreateSocket();

	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Exit() override;

};
