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
	constexpr size_t Size() const { return S; }

	T& operator[](size_t index) { return m_Data[index]; }
	const T& operator[](size_t index) const { return m_Data[index]; }

	T* Data() { return m_Data; }
	const T* Data() const { return m_Data; }
private:
	T m_Data[S];
};


int main()
{
	int size = 5;
	Array<int, 5> data;
	
	
	memset(&data[0], 0, data.Size() * sizeof(int));

	data[1] = 5;
	data[4] = 8;


	for (size_t i = 0; i < data.Size(); ++i) {
		std::cout << data[i] << std::endl;
	}


	std::cin.get();
}