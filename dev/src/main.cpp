//+------------------------------------------------------------------+
//|                                                                  |
//|               Track MEMORY ALLOCATIONS the Easy Way              |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


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
	Object* obj = new Object;



	std::cin.get();
}