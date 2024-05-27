//+------------------------------------------------------------------+
//|                                                                  |
//|                  How to Deal with OPTIONAL Data                  |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <fstream>


std::string ReadFileAsString(const std::string& filepath)
{
	std::ifstream stream(filepath);
	if (stream)	{
		std::string result;
		// read file
		stream.close(); // or return "";
		return result;
	}

	return std::string();
}


int main()
{
	std::string data = ReadFileAsString("data.txt");
	if (data != "") {

	}


	std::cin.get();
}