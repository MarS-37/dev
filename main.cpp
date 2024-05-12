//+------------------------------------------------------------------+
//|                                                                  |
//|                            Local Static                          |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


int Function()
{
	static int i = 0;
	++i;
	std::cout << i << std::endl;

	return i;
}


int main()
{
	for (auto i = 0; i < 5; ++i) {
		Function();
	}
}