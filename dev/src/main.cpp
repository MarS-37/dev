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

	delete[] a2d;


	std::cin.get();
}