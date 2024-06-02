//+------------------------------------------------------------------+
//|                                                                  |
//|            std::move and the Move Assignment Operator            |
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
	String(String&& other) noexcept
	{
		printf("Moved!\n");
		m_Size = other.m_Size;
		m_Data = other.m_Data;

		other.m_Size = 0;
		other.m_Data = nullptr;
	}
	String& operator=(String&& other) noexcept
	{
		printf("Moved!\n");

		if (this != &other) {
			delete[] m_Data;
			m_Size = other.m_Size;
			m_Data = other.m_Data;

			other.m_Size = 0;
			other.m_Data = nullptr;
		}


		return *this;
	}
	~String()
	{
		printf("Destroyed!\n");

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
		: m_Name(name)
	{
	}
	Entity(String&& name)
		: m_Name(std::move(name)) // or m_Name((String&&)name)
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
	//Entity entity("Cherno"); // or Entity entity(String("Cherno"));
	//entity.PrintName();


	String apple = "Apple: ";
	String dest;

	std::cout << "Apple: ";
	apple.Print();
	std::cout << "Dest: ";
	dest.Print();

	dest = std::move(apple); // or dest(std::move(string)); or dest((String&&)string); or dest = (String&&)string;

	std::cout << "Apple: ";
	apple.Print();
	std::cout << "Dest: ";
	dest.Print();


	std::cin.get();
}