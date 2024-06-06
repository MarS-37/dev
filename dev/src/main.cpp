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

	// отображается строка, на которую указывает возращенная ссылка
	std::cout << "Sending the returned reference to cout:\n";
	std::cout << refToElement(inventory, 0) << "\n\n";

	// присваивает одну ссылку другой - малозатратная операция присваивания
	std::cout << "Assigning the returned reference to another reference.\n";
	std::string& rStr = refToElement(inventory, 1);
	std::cout << rStr << "\n\n";

	// копирует строковый объект - затратная операция присвоения
	std::cout << "Assigning the returned reference to a string object.\n";
	std::string str = refToElement(inventory, 2);
	std::cout << str << "\n\n";

	// изменениестрокового объекта посредством возвращенной ссылки
	std::cout << "Alterning an object through a returned reference.\n";
	rStr = "Healing Potion";
	std::cout << "Sending the altered object to cout:\n";
	std::cout << inventory[1] << std::endl;


	std::cin.get();

	return 0;
}