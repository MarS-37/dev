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

	T operator[](int index) { return m_Data[index]; }
private:
	T m_Data[S];
};


int main()
{
	int size = 5;
	Array<int, 5> data;
	
	for (int i = 0; i < data.Size(); ++i) {
		std::cout << data[i] << std::endl;
	}


	std::cin.get();
}