#include <iostream>
#include <string>


class Entity
{
public:
	Entity(const std::string& name)
		: m_Name("Unknown"), m_Age(-1) {}
	Entity(int age)
		: m_Name("Unknown"), m_Age(age) {}

private:
	std::string m_Name;
	int m_Age;
};


void PrintEntity(const Entity& entity)
{
	// remaining code
}


int main()
{
	PrintEntity(22);
	PrintEntity(std::string("Cherno")); // or PrintEntity(Entity("Cherno"));

	Entity a("Cherno"); // or a = Entity("Cherno"); or a = "Cherno";
	Entity b(22); // or b = Entity(22); or b = 22;
}