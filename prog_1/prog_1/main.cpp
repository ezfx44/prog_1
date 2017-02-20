#include <iostream>

int main()
{
	std::cout << "\t\tThe fundamental data types in C++\n" << std::endl;
	std::cout << "-bool \t\t- " << sizeof(bool) << " B" << std::endl;
	std::cout << "-char \t\t- " << sizeof(char) << " B" << std::endl;
	std::cout << "-char16_t \t- " << sizeof(char16_t) << " B" << std::endl;
	std::cout << "-char32_t \t- " << sizeof(char32_t) << " B" << std::endl;
	std::cout << "-wchar_t \t- " << sizeof(wchar_t) << " B" << std::endl;
	std::cout << "-short \t\t- " << sizeof(short) << " B" << std::endl;
	std::cout << "-int \t\t- " << sizeof(int) << " B" << std::endl;
	std::cout << "-long \t\t- " << sizeof(long) << " B" << std::endl;
	std::cout << "-long long \t- " << sizeof(long long) << " B" << std::endl;
	std::cout << "-float \t\t- " << sizeof(float) << " B" << std::endl;
	std::cout << "-double \t- " << sizeof(double) << " B" << std::endl;
	std::cout << "-long double \t- " << sizeof(long double) << " B" << std::endl;
	std::cout << "-nullptr_t \t- " << sizeof(nullptr_t) << " B" << std::endl;
	std::cin.get();
	return 0;
}