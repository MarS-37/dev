//+------------------------------------------------------------------+
//|                                                                  |
//|               Optimizing the usage of std::vector                |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <string>

#include <vector>


struct Vertex
{
	float X, Y, Z;

	Vertex(float x, float y, float z)
		: X(x), Y(y), Z(z) {}

	Vertex(const Vertex& vertex)
		: X(vertex.X), Y(vertex.Y), Z(vertex.Z)
	{
		std::cout << "Copied!" << std::endl;
	}
};


std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.X << ", " << vertex.Y << ", " << vertex.Z;

	return stream;
}


void Function(const std::vector<Vertex>& vertices)
{

}


int main()
{
	std::vector<Vertex> vertices;
	vertices.reserve(3);
	vertices.emplace_back(1, 2, 3);
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);

	for (Vertex v : vertices) {
		std::cout << v << std::endl;
	}
}