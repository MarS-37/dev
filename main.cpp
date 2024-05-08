#include <iostream>
#include <string>


class Entity
{
private:
	std::string m_Name;

public:
	const std::string& GetName() const
	{
		return m_Name;
	}
};


int main()
{
	const Entity e;
	e.GetName();
}