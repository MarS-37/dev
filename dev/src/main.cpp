//+------------------------------------------------------------------+
//|                                                                  |
//|                            BENCHMARKING                          |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


int main()
{
	int value = 0;

	for (int i = 0; i < 1000000; ++i)
		value += 2;

	std::cout << value << std::endl;


	__debugbreak();
}