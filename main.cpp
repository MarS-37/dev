#include <iostream>
#include <string>


class Entity
{
public:
	explicit Entity(const std::string& name)
		: m_Name("Unknown"), m_Age(-1) {}
	explicit Entity(int age)
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
	Entity a("Cherno"); // or a = Entity("Cherno"); or a = (Entity)"Cherno"; not a = "Cherno";
	Entity b(22); // or b = Entity(22); or b = (Entity)22; not b = 22;
}