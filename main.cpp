//+------------------------------------------------------------------+
//|                                                                  |
//|                      Using Dynamic Libraries                     |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <GLFW/glfw3.h>


int main()
{
	int a = glfwInit();
	std::cout << "GLFW WORK: " << a << std::endl;

	std::cin.get();
}