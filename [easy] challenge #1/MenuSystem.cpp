#include "MENUSYSTEM.h"
#include "WriteToFile.h"
#include "ViewInfo.h"
#include "DeleteInfo.h"
#include <iostream>
#include <conio.h>

MenuSystem::MenuSystem() {}

MenuSystem::~MenuSystem() {}

// Displays the menu to the user
void MenuSystem::display(int option) const 
{
	std::cout << "=== MENU ===\n";
	std::cout << (option == 0 ? "> " : " ") << "Add info\n";
	std::cout << (option == 1 ? "> " : " ") << "View info\n";
	std::cout << (option == 2 ? "> " : " ") << "Delete info\n";
	std::cout << (option == 3 ? "> " : " ") << "Exit\n";
}

void MenuSystem::menuLogic() const 
{	
	WriteFile file;
	ViewInfo view;
	DeleteInfo deletefile;

	int currentOption = 0;
	char input;
	const int numOption{ 4 };
	while (true) {
		system("cls"); // clear screen (use "clear" on Linux/Unix systems)
		display(currentOption);

		input = _getch();

		if (input == 'w' || input == 'W') 
		{
			// Move menu up
			currentOption = (currentOption > 0) ? currentOption - 1 : numOption - 1;
		}
		else if (input == 's' || input == 'S') 
		{
			// Move down the menu
			currentOption = (currentOption < numOption - 1) ? currentOption + 1 : 0;
		}
		else if (input == '\r') { //Enter key to make selection
			system("cls");
			if (currentOption == 0) 
			{
				file.createFile();
			}
			else if (currentOption == 1) 
			{
				view.displayInfoToConsole();
			}
			else if (currentOption == 2) 
			{
				deletefile.deleteFile();
			}
			else if (currentOption == 3) 
			{
				std::cout << "Exit program\n";
				break;
			}
			system("pause"); // Pause before showing the menu again
		}
	}
}