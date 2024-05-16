//+------------------------------------------------------------------+
//|                                                                  |
//|                         The "auto" keyword                       |
//|                                                                  |
//+------------------------------------------------------------------+

#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>


auto GetName()
{
	return "Cherno";
}

class Device {};


class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Device;

public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
	{
		return m_Device;
	}
};


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


	DeviceManager dm;
	const auto& devices = dm.GetDevices();
	// or const std::unordered_map<std::string, std::vector<Device*>>& devices = dm.GetDevices();


	std::cin.get();
}