#include <iostream>

int main()
{
	const char* name = "Cherno";
	char name2[6] = { 'C', 'h', 'e', 'r', 'n', 'o' };
	char name3[7] = { 'C', 'h', 'e', 'r', 'n', 'o', 0}; // or '\0' or NULL

	std::cout << name << std::endl;
	std::cout << name2 << std::endl;
	std::cout << name3 << std::endl;
}