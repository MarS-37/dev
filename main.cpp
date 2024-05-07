#include <iostream>
#include <string>

#include <stdlib.h>


class Entity
{
private:
	int m_X;

public:
	int GetX() const
	{
		return m_X;
	}
	void SetX(int x) const
	{
		m_X = x; // error
	}
};


int main()
{
	const int MAX_AGE = 90;


	const int* a = new int;

	*a = 2;		// error
	a = (int*)&MAX_AGE;


	int* const b = new int;

	*b = 2;
	b = (int*)&MAX_AGE; // error
		

	int const* c = new int;

	*c = 2;		// error
	c = (int*)&MAX_AGE;


	const int* const d = new int;

	*d = 2;		// error
	d = (int*)&MAX_AGE; // error


	std::cout << *a << std::endl;

	delete a;
	delete b;
	delete c;
	delete d;
}