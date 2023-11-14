// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientSocket.h"
#include "../../Libraries/include/Enum.pb.h"
#include "../../Libraries/include/Protocol.pb.h"
#include "../../Libraries/include/Struct.pb.h"

ClientSocket::ClientSocket()
{
	Thread = FRunnableThread::Create(this, TEXT("Net thread"));
}

ClientSocket::~ClientSocket()
{
}

void ClientSocket::CreateSocket()
{
	_socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);

	FString address = TEXT("127.0.0.1");
	int32 port = 7777;
	FIPv4Address ip;
	FIPv4Address::Parse(address, ip);
	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPort(port);

	_isconnect = _socket->Connect(*addr);

	int a = 0;
}

bool ClientSocket::Init()
{
	return true;
}

uint32 ClientSocket::Run()
{

	while (_isconnect)
	{
		uint8 buffer[BUF_SIZE];
		int read;
		_socket->Recv(&buffer[0], 10000, read);

		if (read != 0)
		{
			// call bakc;
		}
		int a = 0;	
		//call back;
	}


	return uint32();
}

void ClientSocket::Exit()
{
	_socket->Close();
}


