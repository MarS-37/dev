#include <iostream>

class  Entity
{
public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;

		std::cout << "Created Entity!" << std::endl;
	}
	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};


void Function()
{
	Entity e;
	e.Print();
}


int main()
{
	Entity e;
	e.Print();
}