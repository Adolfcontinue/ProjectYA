#pragma once
#include <Singleton.h>

class UserManager : public Singleton<UserManager>
{
public:
	void Add(int64 sessionKey, UserRef user);
	void Erase(int64 Key);

private:
	map<int64, UserRef> _users;
};

