//+------------------------------------------------------------------+
//|                                                                  |
//|            Multiple TYPES of Data in a SINGLE VARIABLE           |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>

#include <variant>


int main()
{
	std::variant<std::string, int> data;
	data = "Cherno";
	std::cout << std::get<std::string>(data) << "\n";
	data = 2;
	std::cout << std::get<int>(data) << "\n";
	
	
	std::cin.get();
}