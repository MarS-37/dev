#include <iostream>
#include <array>


class Entity
{
public:
	static const int exampleSize = 5;
	int example[exampleSize];

	std::array<int, 5> another{ 1, 2, 3, 4, 5 };

	Entity()
	{
		for (int i = 0; another.size(); ++i)
			example[i] = 2;
	}
};


int main()
{
	Entity e;
}