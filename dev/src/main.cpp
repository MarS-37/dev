//+------------------------------------------------------------------+
//|                                                                  |
//|                            SINGLETONS                            |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


class Singleton
{
public:
	Singleton(const Singleton&) = delete;

	static Singleton& Get()
	{
		return s_Instance;
	}

	void Function() {}

private:
	Singleton() {}

	float m_Member = 0.0f;

	static Singleton s_Instance;
};


Singleton Singleton::s_Instance;


int main()
{
	auto& instance = Singleton::Get(); // or Singleton& instance = ...


	instance.Function();


	std::cin.get();
}