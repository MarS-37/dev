//+------------------------------------------------------------------+
//|                                                                  |
//|                        lvalues and rvalues                       |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <memory>


void PrintName(std::string& name)
{
	std::cout << name << std::endl;
}


int main()
{
	std::string firstName = "Yan";
	std::string lastName = "Chernikov";

	std::string fullName = firstName + lastName;


	PrintName(fullName);
	PrintName(firstName + lastName);


	std::cin.get();
}