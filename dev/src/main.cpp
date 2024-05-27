//+------------------------------------------------------------------+
//|                                                                  |
//|                  How to Deal with OPTIONAL Data                  |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <fstream>

#include <optional>


std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
	std::ifstream stream(filepath);
	if (stream)	{
		std::string result;
		// read file
		stream.close();
		return result;
	}

	return {};
}


int main()
{
	auto data = ReadFileAsString("data.txt");	// or std::optional<std::string>
	if (data.has_value()) {

	}


	std::cin.get();
}