//+------------------------------------------------------------------+
//|                                                                  |
//|                         The "auto" keyword                       |
//|                                                                  |
//+------------------------------------------------------------------+

#include <iostream>
#include <string>
#include <vector>


int main()
{
	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");


	for (auto it = strings.begin();
		it != strings.end(); ++it)
	/* or
	for (std::vector<std::string>::iterator it = strings.begin();
		it != strings.end(); ++it)*/
	{
		std::cout << *it << std::endl;
	}
}