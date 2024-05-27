//+------------------------------------------------------------------+
//|                                                                  |
//|                       How to store ANY data                      |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>

#include <any>


int main()
{
	std::any data;
	data = 2;
	data = "Cherno";
	data = std::string("Cherno");
	std::string& string = std::any_cast<std::string&>(data);


	std::cin.get();
}