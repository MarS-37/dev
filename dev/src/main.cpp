//+------------------------------------------------------------------+
//|                                                                  |
//|                   ARRAY - Making DATA STRUCTURES                 |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>

#include <array>


template <size_t S>

class Array
{
public:

private:
	int m_Data[S];
};


int main()
{
	constexpr int size = 5;
	Array<size> data;


	std::cin.get();
}