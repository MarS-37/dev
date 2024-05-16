//+------------------------------------------------------------------+
//|                                                                  |
//|                                Macros                            |
//|                                                                  |
//+------------------------------------------------------------------+

#include <iostream>
#include <string>


#ifdef PR_DEBUG
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x)
#endif


int main()
{
	LOG("Hell");


	std::cin.get();
	return 0;
}