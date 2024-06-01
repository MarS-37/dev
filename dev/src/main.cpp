//+------------------------------------------------------------------+
//|                                                                  |
//|                           Move Semantics                         |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>


class String
{
public:
	String() = default;
	String(const char* string)
	{
		printf("Created!\n");
		m_Size = strlen(string);
		m_Data = new char[m_Size];
		memcpy(m_Data, string, m_Size);
	}
	String(const String& other)
	{
		printf("Copied!\n");
		m_Size = other.m_Size;
		m_Data = new char[m_Size];
		memcpy(m_Data, other.m_Data, m_Size);
	}
	~String()
	{
		delete m_Data;
	}
	void Print()
	{
		for (uint32_t i = 0; i < m_Size; i++)
			printf("%C", m_Data[i]);

		printf("\n");
	}

private:char* m_Data;
	   uint32_t m_Size;
};


class Entity
{
public:
	Entity(const String& name)
		:m_Name(name)
	{
	}
	void PrintName()
	{
		m_Name.Print();
	}

private:
	String m_Name;
};


int main()
{
	Entity entity("Cherno"); // or Entity entity(String("Cherno"));
	entity.PrintName();


	std::cin.get();
}