//+------------------------------------------------------------------+
//|                                                                  |
//|                       SMART POINTERS in C++						 |
//|        (std::unique_ptr, std::shared_ptr, std::weak_ptr)         |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>

#include <memory>


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

	void Print(){}
};


int main()
{
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();

		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		std::shared_ptr<Entity> e0 = sharedEntity;

		entity->Print();
	}
}