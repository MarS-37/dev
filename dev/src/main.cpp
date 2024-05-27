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


struct CustomClass
{
	std::string s0, s1;
};


int main()
{
	std::any data;
	data = 2;
	data = CustomClass();
	//std::string& string = std::any_cast<std::string&>(data);


	std::cin.get();
}