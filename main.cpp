//+------------------------------------------------------------------+
//|                                                                  |
//|                     The "this" keyword in C++                    |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


void PrintEntity(const Entity& e);


class Entity
{
public:
	int X, Y;

	Entity(int x, int y)
	{
		this->X = x; // or (*this).x = x;
		this->Y = y; // or (*this).y = y;

		PrintEntity(*this);
	}
};


void PrintEntity(Entity* e)
{
	// Print
}


int main()
{
	Entity e(1, 3);

	std::cout << e.X << ", " << e.Y << std::endl;
}