//+------------------------------------------------------------------+
//|                                                                  |
//|                             Operator ->                          |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


class Entity
{
public:	
	void Print() const 
	{
		std::cout << "Hell!" << std::endl;
	}
};


int main()
{
	Entity e;
	e.Print();

	Entity* ptr = &e;
	ptr->Print(); // or (*ptr).Print();

	Entity& entity = *ptr;
	entity.Print();


}