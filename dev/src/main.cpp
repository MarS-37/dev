//+------------------------------------------------------------------+
//|                                                                  |
//|                       How to store ANY data                      |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>

#include <any>


void* operator new(size_t size)
{
	return malloc(size);
}


int main()
{
	std::any data;
	data = 2;
	data = "Cherno";
	data = std::string("Cherno");
	std::string& string = std::any_cast<std::string&>(data);


	std::cin.get();
}