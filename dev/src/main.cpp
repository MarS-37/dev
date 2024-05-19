//+------------------------------------------------------------------+
//|                                                                  |
//|                         Function Pointers                        |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


void Hell()
{
	std::cout << "meshall" << std::endl;
}


int main()
{
	typedef void(*HellFunction)();
	HellFunction function = Hell;

	function();
	function();


	std::cin.get();
}