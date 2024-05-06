#include <iostream>


class Entity
{
public:
	static const int exampleSize = 5;
	int example[exampleSize];

	Entity()
	{
		int a[5];
		int count = sizeof(a) / sizeof(int);

		for (int i = 0; i < 5; ++i)
			example[i] = 2;
	}
};


int main()
{
	Entity e;
}