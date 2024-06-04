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


	std::cout << "\n\n==========================\n\n";


	// back_inserter
	std::map<std::string, int> map_pair = {
		{"one", 1},
		{"two", 2},
		{"three", 3}
	};

	std::vector<std::pair<std::string, int>> vec_pair = { {"four", 4} };

	std::copy(map_pair.begin(), map_pair.end(), std::back_inserter(vec_pair));

	for (const auto& pair : vec_pair) {
		std::cout << "\nkey: " << pair.first << ", value: " << pair.second;
	}




	// copy elements from map to vector
	/*
	std::map		(std::pair<const Key, T>)
	std::vector		(std::pair<Key, T>)
	*/

	std::map<std::string, int> map_pair_2 = {
		{"raz", 1},
		{"dva", 2},
		{"tre", 3}
	};

	std::vector<std::pair<std::string, int>> vec_pair_2 = { {"cetire", 4} };

	std::transform(map_pair_2.begin(), map_pair_2.end(), std::back_inserter(vec_pair_2),
		[](const std::pair<const std::string, int>& p) {
			return std::make_pair(p.first, p.second);
		});

	/*
	This code uses `std::transform` with a lambda function to explicitly convert 
	`std::pair<const std::string, int>` from `std::map` to 
	`std::pair<std::string, int>` for `std::vector`. 
	After that, all elements, including the originally added pair {“four”, 4}, 
	will be correctly output.
	*/

	for (const auto& pair : vec_pair_2) {
		std::cout << "\nkey: " << pair.first << ", value: " << pair.second;
	}


	std::cout << "\n\n==========================\n\n";


	// front_inserter
	std::set<int> set_t = {
		10, 20, 30
	};

	/*
	set_t.insert(10);
	set_t.insert(20);
	set_t.insert(30);
	*/

	std::list<int> digitals;

	std::copy(set_t.begin(), set_t.end(), std::front_inserter(digitals));
	std::copy(digitals.begin(), digitals.end(), std::ostream_iterator<int>(std::cout, "-"));


	std::cin.get();
}