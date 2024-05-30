//+------------------------------------------------------------------+
//|                                                                  |
//|                     Argument Evaluation Order                    |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


void printSum(int a, int b)
{
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
}


int main()
{
	int value = 0;
	printSum(value++, value++);


	std::cin.get();
}