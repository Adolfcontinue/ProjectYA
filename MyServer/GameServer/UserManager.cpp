#include "pch.h"
#include "UserManager.h"

void UserManager::Add(int64 sessionKey, UserRef user)
{
	_users[sessionKey] = user;
}

void UserManager::Erase(int64 Key)
{
	//Todo
}
