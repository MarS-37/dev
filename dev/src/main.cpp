//+------------------------------------------------------------------+
//|                                                                  |
//|               Track MEMORY ALLOCATIONS the Easy Way              |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


void* operator new(size_t size)
{
	std::cout << "Allocationg " << size << " bytes\n\n";


	return malloc(size);
}


struct Object
{
	int x, y, z;
};


int main()
{
	std::string string = "Cherno";

	std::unique_ptr<Object> obj = std::make_unique<Object>();

	std::cin.get();
}