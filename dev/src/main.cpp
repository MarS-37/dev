//+------------------------------------------------------------------+
//|                                                                  |
//|                           Type Punning                           |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


int main()
{
	int a = 50;
	double& value = *(double*)&a;
	std::cout << value << std::endl;


	std::cin.get();
}