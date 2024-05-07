#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{
	using namespace std::string_literals;


	std::string name0 = std::string("Cherno") + " hello";

	std::string name1 = "Cherno"s + " hello"; // C++14
	std::string name2 = u8"Cherno"s + " hello"; // C++14
	std::wstring name3 = L"Cherno"s + L" hello"; // C++14
	std::u32string name4 = U"Cherno"s + U" hello"; // C++14

	const char* name5 = u8"Cherno";
	const wchar_t* name6 = L"Cherno";


	const char16_t* name7 = u"Cherno";
	const char32_t* name8 = U"Cherno";

	const char* example1 = R"(Line1
		Line2
		Line3
		Line4)";

	const char* example2 = "Line1\n"
		"Line2\n"
		"Line3\n";
}