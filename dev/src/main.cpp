//+------------------------------------------------------------------+
//|                                                                  |
//|                     Small String Optimization                    |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


void* operator new(size_t size)
{
	std::cout << "Allocating " << size << " bytes\n";

	return malloc(size);
}


int main()
{
	std::string name = "Cherno";


	std::cin.get();
}