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


class Derived : public Base
{
public:
	Derived() { std::cout << "Derived Constructor\n"; }
	~Derived() { std::cout << "Derived Destructor\n"; }
};


int main()
{
	Base b;
	Derived d;


	std::cin.get();
}