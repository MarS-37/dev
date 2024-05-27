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
	const char* name = "Yan Chernikov";

#if 0
	std::string firstName = name.substr(0, 3);
	std::string lastName = name.substr(4, 9);

#else

	std::string_view firstName(name, 3);
	std::string_view lastName(name + 4, 9);

#endif

	PrintName("Cherno");

	//PrintName(firstName);
	//PrintName(lastName);


	std::cout << s_AllocCount << " allocations " << std::endl;


	std::cin.get();
}