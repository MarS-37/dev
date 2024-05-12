//+------------------------------------------------------------------+
//|                                                                  |
//|                            Local Static                          |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


class Singleton
{
private:
	static Singleton* s_Instance;

public: 
	static Singleton& Get()
	{
		return *s_Instance;
	}

	void Hello() {}
};


Singleton* Singleton::s_Instance = nullptr;


int main()
{
	Singleton::Get().Hello();
}