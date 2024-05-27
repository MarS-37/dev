//+------------------------------------------------------------------+
//|                                                                  |
//|     VISUAL BENCHMARKING (how to measure performance visually)    |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>
#include <chrono>

#include <cmath>


class Timer
{
public:
	Timer(const char* name)
		: m_Name(name), m_Stopped(false)
	{
		m_StartTimepoint = std::chrono::high_resolution_clock::now();
	}

	void Stop()
	{
		auto endTimepoint = std::chrono::high_resolution_clock::now();

		long long start = std::chrono::time_point_cast<std::chrono::milliseconds>(m_StartTimepoint).time_since_epoch().count();
		long long end = std::chrono::time_point_cast<std::chrono::milliseconds>(endTimepoint).time_since_epoch().count();

		std::cout << m_Name << ": " << (end - start) << "ms\n";

		m_Stopped = true;
	}

	~Timer()
	{
		if (!m_Stopped)
			Stop();
	}

private:
	const char* m_Name;
	std::chrono::time_point<std::chrono::steady_clock> m_StartTimepoint;
	bool m_Stopped;
};


void Function1()
{
	Timer timer("Function1");

	for (int i = 0; i < 1000; ++i) {
		std::cout << "Hello World # " << i << std::endl;
	}
}


void Function2()
{
	Timer timer("Function2");

	for (int i = 0; i < 1000; ++i) {
		std::cout << "Hello World # " << sqrt(i) << std::endl;
	}
}


int main()
{
	Function1();
	Function2();


	std::cin.get();
}