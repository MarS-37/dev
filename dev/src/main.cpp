//+------------------------------------------------------------------+
//|                                                                  |
//|                          Dynamic Casting                         |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


class Entity
{
	
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

	Player* p = (Player*)e1;


	std::cin.get();
}