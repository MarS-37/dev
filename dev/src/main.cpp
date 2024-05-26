//+------------------------------------------------------------------+
//|                                                                  |
//|                         STRUCTURED BINDINGS                      |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>
#include <tuple>


std::tuple<std::string, int> CreatePerson()
{
	return{ "Cherno", 24 };
}


int main()
{
	auto [name, age] = CreatePerson();
	

	 std::cin.get();
}