#include <iostream>
#include <vector>
#include <fstream>
#include "ViewInfo.h"
#include "MenuSystem.h"

ViewInfo::ViewInfo() {}

ViewInfo::~ViewInfo() {}

void ViewInfo::displayInfoToConsole()
{
	std::ifstream f("index.txt");

	if (!f.is_open())
	{
		std::cerr << "Error opening the file!";
	}

	std::string s;

	while (getline(f, s))
	{
		std::cout << s << std::endl;
	}

	f.close();
}
