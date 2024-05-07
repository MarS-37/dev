#include <iostream>
#include <string>


void PrintString(std::string& string)
{
	std::cout << string << std::endl;
}

int main()
{
	std::string name = std::string("Cherno") + " hello";
	bool contains = name.find("no_") != std::string::npos;

	PrintString(name);

	std::cout << name << std::endl;
	std::cout << contains << std::endl;
}