#include <iostream>


int main()
{
	int example[5];

	for (int i = 0; i < 5; ++i)
		example[i] = 2;

	

	int* another = new int[5];

	for (int i = 0; i < 5; ++i)
		another[i] = 2;

	delete[] another;
}