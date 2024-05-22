//+------------------------------------------------------------------+
//|                                                                  |
//|                           Type Punning                           |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


struct Entity
{
	int x, y;

	int* GetPositions()
	{
		return &x;
	}
};


int main()
{
	Entity e = { 5, 8 };

	int* position = e.GetPositions();

	int y = *(int*)((char*)&e + 4);

	std::cout << *position << ", " << y << std::endl;


	std::cin.get();
}