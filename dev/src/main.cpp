//+------------------------------------------------------------------+
//|                                                                  |
//|                           using namespace                        |
//|                                                                  |
//+------------------------------------------------------------------+


#include <vector>
#include <string>
#include <iostream>
#include <functional>

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values)
		func(value);
}


namespace apple {
	void print(const std::string& text)
	{
		std::cout << text << std::endl;
	}
}


namespace orange {
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
}


int main()
{

	apple::print("Hell");


#if 0

	std::vector<int> values = { 1, 5, 4, 2, 3 };
	auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
	std::cout << *it << std::endl;

	int a = 5;

	auto lambda = [=](int value) {std::cout << "Value: " << a << std::endl; };

	ForEach(values, lambda);

#endif


	std::cin.get();
}