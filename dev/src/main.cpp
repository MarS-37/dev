//+------------------------------------------------------------------+
//|                                                                  |
//|                     Multidimensional Arrays                      |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


int main()
{
	int** a2d = new int* [5];

	for (int i = 0; i < 5; i++) {
		a2d[i] = new int[5];
	}

	for (int i = 0; i < 5; i++) {
		delete[] a2d[i];
	}

	delete[] a2d;


	std::cin.get();
}