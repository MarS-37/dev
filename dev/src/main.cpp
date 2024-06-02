//+------------------------------------------------------------------+
//|                                                                  |
//|                   ARRAY - Making DATA STRUCTURES                 |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>

#include <array>


template <typename T, size_t S>

class Array
{
public:
	constexpr int Size() const { return S; }
private:
	T m_Data[S];
};


int main()
{
	int size = 5;
	Array<int, 5> data;


	static_assert(data.Size() < 10, "Size is too large");

	for (int i = 0; i < data.Size(); ++i) {

	}


	std::cin.get();
}