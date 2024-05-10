#include <iostream>
#include <string>


using String = std::string;


class Entity
{
public:
	Entity()
		: m_Name("Unknown") {}
	Entity(const String& name)
		: m_Name(name) {}

	const String& GetName() const { return m_Name; }

private:
	String m_Name;
};


int main()
{
	Entity* e;

	{
		Entity* entity = new Entity("Cherno");

		e = entity;

		std::cout << entity->GetName() << std::endl; // or (*entity).GetName()
	}

	delete e;
}