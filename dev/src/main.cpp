//+------------------------------------------------------------------+
//|                                                                  |
//|                        Virtual Destructors                       |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


class Base
{
public:
	Base() { }
	virtual ~Base() { }
};


class Derived : public Base
{
public:
	Derived() { }
	~Derived() { }
};


class AnoherClass : public Base
{
public:
	AnoherClass() { }
	~AnoherClass() { }
};


int main()
{
	double value = 5.25;
	double a = (int)value + 5.3;


	double s = static_cast<int>(value) + 5.3;


	std::cin.get();
}