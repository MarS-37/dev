//+------------------------------------------------------------------+
//|                                                                  |
//|                              Casting                             |
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
	Derived* derived = new Derived();


	Base* base = derived;


	AnoherClass* ac = dynamic_cast<AnoherClass*>(ac);


	std::cin.get();
}