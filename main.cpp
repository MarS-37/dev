//+------------------------------------------------------------------+
//|                                                                  |
//|                   Copying and Copy Constructors                  |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


struct Vector2
{
	float x, y;
};

int main()
{
	Vector2* a = new Vector2({ 2, 3 });

	std::cout << a->x << ", " << a->y << std::endl;

	Vector2* b = a;
	b->x = 20;
	b->y = 30;

	std::cout << a->x << ", " << a->y << std::endl;
}