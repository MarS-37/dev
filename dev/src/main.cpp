//+------------------------------------------------------------------+
//|                                                                  |
//|                             Templates                            |
//|                                                                  |
//+------------------------------------------------------------------+


#include "iostream"
#include <string>


template<int N>
class Array
{
private:
	int m_Array[N];

public:
	int GetSize() const { return N; }
};


int main()
{
	Array<5> array;

	return 0;
}