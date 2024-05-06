#include <iostream>


class Entity
{
public:
	int example[5];

	Entity()
	{
		for (int i = 0; i < 5; ++i)
			example[i] = 2;
	}
};


int main()
{
	Entity e;
}