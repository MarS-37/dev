//+------------------------------------------------------------------+
//|                                                                  |
//|                             Templates                            |
//|                                                                  |
//+------------------------------------------------------------------+


#include "iostream"
#include <string>


template<typename T, int N>
class Array
{
private:
	T m_Array[N];

public:
	Array() : m_Array{} {}

	int GetSize() const { return N; }
};


int main()
{
	Array<int, 5> array; // or Array<std::string, 50> array; or Array<float, 10> array;

	std::cout << array.GetSize() << std::endl;

	return 0;
}