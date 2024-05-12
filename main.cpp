//+-----------------------------------------------------------------+
//|                                                                 |
//|                Using Libraries (Static Linking)                 |
//| https://github.com/glfw/glfw/releases/download/3.4/glfw-3.4.zip |
//|                                                                 |
//+-----------------------------------------------------------------+


#include <iostream>
//#include <GLFW/glfw3.h>

extern "C" int glfwInit();

int main()
{
	int a = glfwInit();
	std::cout << "GLFW WORK: " << a << std::endl;
}