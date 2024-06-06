//+------------------------------------------------------------------+
//|                                                                  |
//|                           const variants                         |
//|                                                                  |
//+------------------------------------------------------------------+


#include <iostream>
#include <vector>
#include <string>


std::string& refToElement(std::vector<std::string> vec, int i)
{
	return vec[i];
}


int main()
{
	std::vector<std::string> inventory{ "One", "Two", "Tree" };

	// ������������ ������, �� ������� ��������� ����������� ������
	std::cout << "Sending the returned reference to cout:\n";
	std::cout << refToElement(inventory, 0) << "\n\n";

	// ����������� ���� ������ ������ - ������������� �������� ������������
	std::cout << "Assigning the returned reference to another reference.\n";
	std::string& rStr = refToElement(inventory, 1);
	std::cout << rStr << "\n\n";

	// �������� ��������� ������ - ��������� �������� ����������
	std::cout << "Assigning the returned reference to a string object.\n";
	std::string str = refToElement(inventory, 2);
	std::cout << str << "\n\n";

	// ������������������� ������� ����������� ������������ ������
	std::cout << "Alterning an object through a returned reference.\n";
	rStr = "Healing Potion";
	std::cout << "Sending the altered object to cout:\n";
	std::cout << inventory[1] << std::endl;


	std::cin.get();

	return 0;
}