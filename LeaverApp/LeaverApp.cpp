#include <iostream>
#include "Leaver.h"

#ifdef _WIN32
#include "windows.h"
#endif

int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
#endif

	setlocale(LC_ALL, "Russian");
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Leaver leaver;
	leaver.leave(name);
	return 0;
}
