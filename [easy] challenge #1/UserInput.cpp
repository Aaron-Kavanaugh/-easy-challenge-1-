#include "UserInput.h"
#include <iostream>
#include <string>
UserInfo::UserInfo() : name(""), age(""), username(""){}
UserInfo::UserInfo(const std::string& n, const std::string& a, const std::string& u) : name(n), age(a), username(u) {}
UserInfo::~UserInfo() {}

void UserInfo::setName()
{
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
}

void UserInfo::setAge()
{
	std::cout << "Enter your age: ";
	std::getline(std::cin, age);
}

void UserInfo::setUsername()
{
	std::cout << "Enter your username: ";
	std::getline(std::cin, username);
}

std::string UserInfo::getName() const
{
	return name;
}

std::string UserInfo::getAge() const
{
	return age;
}

std::string UserInfo::getUsername() const
{
	return username;
}