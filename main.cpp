//+------------------------------------------------------------------+
//|                                                                  |
//|                            Operator ->                           |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


class Entity
{
public:
	int x;
public:
	void Print() const 
	{
		std::cout << "Hell!" << std::endl;
	}
};


class ScopedPtr
{
private:
	Entity* m_Obj;

public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity) {}

	~ScopedPtr()
	{
		delete m_Obj;
	}

	Entity* operator->()
	{
		return m_Obj;
	}
};


int main()
{
	ScopedPtr entity = new Entity();
	entity->Print();
}