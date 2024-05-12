//+------------------------------------------------------------------+
//|                                                                  |
//|               Dynamic Arrays in C++ (std::vector)                |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>


struct Vertex
{
	float x, y, z;
};


std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;

	return stream;
}


int main()
{
	Vertex* vertices = new Vertex[5];
}