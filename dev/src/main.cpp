//+------------------------------------------------------------------+
//|                                                                  |
//|                        lvalues and rvalues                       |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


int GetValue()
{
	return 10;
}


int main()
{
	int i = GetValue();
	GetValue() = 5;


	std::cin.get();
}