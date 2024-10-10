#pragma once
#include <string>

class UserInfo
{
public:
	UserInfo();
	UserInfo(const std::string& n, const std::string& a, const std::string& u);
	~UserInfo();

	void setName();
	void setAge();
	void setUsername();

	std::string getName() const;
	std::string getAge() const;
	std::string getUsername() const;

private:
	std::string name;
	std::string age;
	std::string username;
};