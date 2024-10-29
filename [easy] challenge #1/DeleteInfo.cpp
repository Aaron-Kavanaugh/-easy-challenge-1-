#include <iostream>
#include "DeleteInfo.h"

DeleteInfo::DeleteInfo() {}

DeleteInfo::~DeleteInfo() {}

void DeleteInfo::deleteFile()
{
	int status = remove("index.txt");

	if (status != 0)
	{
		std::perror("Error file not located");
	}
	else
	{
		std::cout << "File successfully deleted" << std::endl;
	}
}