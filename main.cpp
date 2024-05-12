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
	static Singleton& s_Instance;

public: 
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}

	void Hello() {}
};


int main()
{
	Singleton::Get().Hello();
}