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

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			a2d[x][y] = 2;
		}
	}

	for (int i = 0; i < 5; i++) {
		delete[] a2d[i];
	}

	delete[] a2d;


	int* array = new int[5 * 5];
	for (int y = 0; y < 5 * 5; y++) {
		for (int x = 0; x < 5; x++) {
			array[x + y * 5] = 2;
		}
	}

	delete[] array;


	std::cin.get();
}