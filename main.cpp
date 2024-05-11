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


class ScopedPtr
{
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr) {}

	~ScopedPtr()
	{
		delete m_Ptr;
	}

private:
	Entity* m_Ptr;
};


int main()
{
	{
		ScopedPtr e = new Entity(); // or ScopedPtr e(new Entity()); Entity* e = new Entity();
	}
}