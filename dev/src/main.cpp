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
	auto function = Hell; // or void(*cherno)() = Hell;

	function();
	function();


	std::cin.get();
}