//+------------------------------------------------------------------+
//|                                                                  |
//|                     Multidimensional Arrays                      |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


int main()
{
	int** a2d = new int* [50];

	for (int i = 0; i < 50; i++) {
		a2d[i] = new int[50];
	}

	a2d[0][0] = 0;
	a2d[0][1] = 0;
	a2d[0][2] = 0;


	std::cin.get();
}