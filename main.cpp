//+------------------------------------------------------------------+
//|                                                                  |
//|                     The "this" keyword in C++                    |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		this->x = x; // or (*this).x = x;
		this->y = y; // or (*this).y = y;
	}
};


int main()
{
	Entity e(1, 3);

	std::cout << e.x << ", " << e.y << std::endl;
}