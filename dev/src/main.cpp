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

#define STRING_VIEW 1
#if STRING_VIEW
void PrintName(std::string_view name)
{
	std::cout << name << std::endl;
}

#else
void PrintName(const std::string& name)
{
	std::cout << name << std::endl;
}
#endif

int main()
{
	std::string name = "Yan Chernikov";


#if STRING_VIEW
	std::string_view firstName(name.c_str(), 3);
	std::string_view lastName(name.c_str() + 4, 9);
#else
	std::string firstName = name.substr(0, 3);
	std::string lastName = name.substr(4, 9);
#endif


	PrintName("Cherno");
	PrintName(firstName);
	PrintName(lastName);


	std::cout << s_AllocCount << " allocations " << std::endl;


	std::cin.get();
}