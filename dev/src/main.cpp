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
	Entity* actuallyEnemy = new Enemy();
	
	Entity* actuallyPlayer = player;
	
	Player* p1 = dynamic_cast<Player*>(actuallyEnemy);

	Player* p2 = dynamic_cast<Player*>(actuallyPlayer);


	std::cin.get();
}