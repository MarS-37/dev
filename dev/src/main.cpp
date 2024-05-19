//+------------------------------------------------------------------+
//|                                                                  |
//|                             Lambdas                              |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <vector>


void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}


int main()
{
	std::vector<int> values = { 1, 5, 4, 2, 3 };
	auto lambda = [](int value) {std::cout << "Value: " << value << std::endl; };
	ForEach(values, lambda);


	std::cin.get();
}