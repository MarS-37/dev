//+------------------------------------------------------------------+
//|                                                                  |
//|                            SINGLETONS                            |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


class Random
{
public:
	Random(const Random&) = delete;

	static Random& Get()
	{
		return s_Instance;
	}

	float  Float() { return m_RandomGenerator; }

private:
	Random() {}

	float m_RandomGenerator = 0.5f;

	static Random s_Instance;
};


Random Random::s_Instance;


int main()
{
	float number = Random::Get().Float();


	std::cin.get();
}