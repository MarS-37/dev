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
	 //auto person = CreatePerson(); // or std::tuple<std::string, int>
	 //std::string& name = std::get<0>(person);
	 //int age = std::get<1>(person);


	 std::string name;
	 int age;
	 std::tie(name, age) = CreatePerson();
	

	 std::cin.get();
}