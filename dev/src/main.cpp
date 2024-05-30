//+------------------------------------------------------------------+
//|                                                                  |
//|                        lvalues and rvalues                       |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


int& GetValue()
{
	static int value = 10;

	return value;
}


int main()
{
	int i = GetValue();
	GetValue() = 5;


	std::cin.get();
}