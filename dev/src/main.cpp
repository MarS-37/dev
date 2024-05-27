//+------------------------------------------------------------------+
//|                                                                  |
//|                  How to make your STRINGS FASTER                 |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


static uint32_t s_AllocCount = 0;

void* operator new(size_t size)
{
	s_AllocCount++;
	std::cout << "Allocating " << size << " bytes\n";
	return malloc(size);
}


void PrintName(const std::string& name)
{
	std::cout << name << std::endl;
}


int main()
{
	std::string name = "Yan Chernikov";
	PrintName(name);


	std::cout << s_AllocCount << " allocations " << std::endl;


	std::cin.get();
}