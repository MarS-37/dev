//+------------------------------------------------------------------+
//|                                                                  |
//|                            Operator ->                           |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


struct Vector3
{
	float x, y, z;
};


int main()
{
	int offset0 = (int)&((Vector3*)nullptr)->x;
	std::cout << "Offset: " << offset0 << std::endl;

	int offset1 = (int)&((Vector3*)nullptr)->y;
	std::cout << "Offset: " << offset1 << std::endl;

	int offset2 = (int)&((Vector3*)nullptr)->z;
	std::cout << "Offset: " << offset2 << std::endl;
}