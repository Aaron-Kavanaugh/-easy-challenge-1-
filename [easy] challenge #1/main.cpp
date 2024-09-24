#include <iostream>
#include <fstream>

int main()
{

	std::ofstream myFiles("filename.txt");

	myFiles << "Hi, mom!";

	myFiles.close();

	return 0;
}