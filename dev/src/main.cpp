//+------------------------------------------------------------------+
//|                                                                  |
//|                              Sorting                             |
//|                                                                  |
//+------------------------------------------------------------------+


#include <algorithm>
#include <iostream>
#include <vector>


int main()
{
	std::vector<int> values{ 3, 5, 1, 4, 2 };
	std::sort(values.begin(), values.end());

	for (int value : values) {
		std::cout << value << std::endl;
	}

	// or 

	for (int i = 0; i < values.size(); ++i) {
		std::cout << i << " " << values[i] << std::endl;
	}


	std::cin.get();
}