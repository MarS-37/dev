//+------------------------------------------------------------------+
//|                                                                  |
//|                        lvalues and rvalues                       |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


void SetValue(int& value)
{
}


int main()
{
	int i = 10;
	int& a = 10;
	const int& b = 10;
	SetValue(i);
	SetValue(10);


	std::cin.get();
}