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
	data = 2;

	std::cin.get();
}