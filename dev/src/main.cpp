//+------------------------------------------------------------------+
//|                                                                  |
//|               Track MEMORY ALLOCATIONS the Easy Way              |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


void* operator new(size_t size)
{
	std::cout << "Allocationg " << size << " bytes\n";

	return malloc(size);
}


void operator delete(void* memory, size_t size)
{
	std::cout << "Freeing " << size << " byte\n";

	free(memory);
}


struct Object
{
	int x, y, z;
};


int main()
{
	{
		std::unique_ptr<Object> obj = std::make_unique<Object>();
	}
	{
		std::string string = "Cherno";
	}
	std::cin.get();
}