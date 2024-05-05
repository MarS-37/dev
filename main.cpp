#include <iostream>

struct Entity
{
	static int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};


int Entity::x;
int Entity::y;


int main()
{
	Entity e;
	Entity::x = 2;
	Entity::y = 3;
	e.Print();

	Entity e1;
	Entity::x = 5;
	Entity::y = 8;
	e1.Print();

	e.Print();
	e1.Print();
}