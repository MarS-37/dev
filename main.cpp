#include <iostream>

struct Entity
{
	int x, y;	
};


static void Print(Entity e)
{
	std::cout << e.x << ", " << e.y << std::endl;
}


int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;
	Print(e);

	Entity e1;
	e1.x = 5;
	e1.y = 8;

	Print(e);
	Print(e1);
}