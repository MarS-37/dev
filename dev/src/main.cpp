//+------------------------------------------------------------------+
//|                                                                  |
//|                          Dynamic Casting                         |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


class Entity
{
public:
	virtual void PrintName() {}
};


class Player : public Entity
{

};


class Enemy : public Entity
{

};


int main()
{
	Player* player = new Player();
	Entity* e = player;
	Entity* e1 = new Enemy();

	Player* p = dynamic_cast<Player*>(e);


	std::cin.get();
}