//+------------------------------------------------------------------+
//|                                                                  |
//|                              Threads                             |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <thread>


static bool s_Finished = false;


void DoWork()
{
	while (!s_Finished) {
		std::cout << "Working...\n";
	}
}


int main()
{
	std::thread worker(DoWork);

	std::cin.get();
	s_Finished = true;

	worker.join();

	std::cin.get();
}