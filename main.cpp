#include <iostream>
#include <string>


static int s_Level = 1;
static int s_Speed = 2;


int main()
{
	s_Speed = s_Level > 5 ? 10 : 5;
	std::cout << s_Speed << std::endl;
}