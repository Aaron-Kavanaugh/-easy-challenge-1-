#include "WriteToFile.h"
#include "UserInput.h"
#include <fstream>
#include <filesystem>
#include <string>

WriteFile::WriteFile() {}

WriteFile::~WriteFile() {}

void WriteFile::createFile()
{
	UserInfo user;

	user.setName();
	user.setAge();
	user.setUsername();

	std::ofstream file("index.txt");
	if (file.is_open())
	{
		file << "Name: " << user.getName() << std::endl;
		file << "Age: " << user.getAge() << std::endl;
		file << "Username: " << user.getUsername() << std::endl;
	}
	file.close();
}