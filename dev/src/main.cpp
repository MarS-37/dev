//+------------------------------------------------------------------+
//|                                                                  |
//|                        Virtual Destructors                       |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


class Base
{
public:
	Base() { std::cout << "Base Constructor\n"; }
	~Base() { std::cout << "Base Destructor\n"; }
};


int main()
{
	Base b;


	std::cin.get();
}