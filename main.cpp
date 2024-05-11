//+------------------------------------------------------------------+
//|                                                                  |
//|          Object Lifetime in C++ (Stack/Scope Lifetimes)          |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


class Entity
{
public:
	Entity()
	{
		std::cout << "Create Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};


void PrintEntity(Entity* e)
{
	// Print
}


int main()
{
	{
		Entity* e = new Entity;
	}
}