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
	Array<std::string, 2> data;

	data[0] = "Cherno";
	data[1] = "C++";


	for (size_t i = 0; i < data.Size(); ++i) {
		std::cout << data[i] << std::endl;
	}


	std::cin.get();
}