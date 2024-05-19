//+------------------------------------------------------------------+
//|                                                                  |
//|                         Function Pointers                        |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


void Hell(int a)
{
	std::cout << "meshall " << a << std::endl;
}


int main()
{
	typedef void(*HellFunction)(int);
	HellFunction function = Hell;

	function(8);
	function(2);


	std::cin.get();
}