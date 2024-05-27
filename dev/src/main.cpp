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
	std::optional<std::string> data = ReadFileAsString("data.txt");	// or auto
	if (data.has_value()) {
		std::cout << "File read successfully!\n";
	}
	else {
		std::string& string = *data; // or data.value();
		std::cout << "File could not be opened!\n";
	}


	std::cin.get();
}