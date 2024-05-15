//+------------------------------------------------------------------+
//|                                                                  |
//|                             Templates                            |
//|                                                                  |
//+------------------------------------------------------------------+


#include "iostream"
#include <string>


template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}


int main()
{
	Print<int>(5);
	Print<std::string>("Hell");
	Print<double>(5.5f);

	return 0;
}