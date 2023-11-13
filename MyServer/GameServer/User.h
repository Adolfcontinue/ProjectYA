#pragma once
class User : public enable_shared_from_this<User>
{
public:
	User() {};
	~User() {};

private:
	int32 _id;
	int64 _sessionKey;
};

