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

	T& operator[](size_t index) 
	{ 
		if (!(index < S)) {
			__debugbrek();
		}

		return m_Data[index]; 
	}
	const T& operator[](int index) const { return m_Data[index]; }
private:
	T m_Data[S];
};


int main()
{
	int size = 5;
	Array<int, 5> data;
	
	const auto& arrayReference = data;

	for (int i = 0; i < data.Size(); ++i) {
		data[i] = 2;

		std::cout << arrayReference[i] << std::endl;
	}


	std::cin.get();
}