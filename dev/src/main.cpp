//+------------------------------------------------------------------+
//|                                                                  |
//|                             std::copy                            |
//|                                                                  |
//+------------------------------------------------------------------+


#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <set>


int main()
{
	// ostream_iterator
	std::list<std::string> ilist;

	ilist.push_back("word ");
	ilist.push_front("space ");
	ilist.push_front("spacesistem ");

	std::copy(ilist.begin(), ilist.end(), std::ostream_iterator<std::string>(std::cout, "-"));


	std::cout << "\n\n==========================\n\n";


	// inserter
	std::map<std::string, int> map_first;
	std::map<std::string, int> map_second;

	/*
	// Initializing a map using an initialization list
    std::map<std::string, int> map_first = {
        {"one", 1},
        {"two", 2},
        {"three", 3}
    };
	*/

	map_first["code"]++;
	map_first["lessons"]+=7;

	std::copy(map_first.begin(), map_first.end(), std::inserter(map_second, map_second.begin()));
	
	for (const auto& pair : map_second) {
		std::cout << "\nkey: " << pair.first << ", value: " << pair.second;
	}
		

	std::cin.get();
}