//+------------------------------------------------------------------+
//|                                                                  |
//|                         STRUCTURED BINDINGS                      |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <tuple>


std::tuple<std::string, int> CreatePerson()
{
	return{ "Cherno", 24 };
}


int main()
{
	 auto person = CreatePerson(); // or std::tuple<std::string, int>
	

	__debugbreak();
}