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
	int a = 2;

	int* b = new int[50];
	Entity* e = new Entity[50]; 
	
	// Entity* e = (Entity*)malloc(sizeof(Entity));

	delete[] b;
	delete[] e;

	// free(e);
}