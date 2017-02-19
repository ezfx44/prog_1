#include <iostream>
#include <type_traits>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "\t\tРазмеры фундаментальных типов данных в языке C++\nПорядковый арифметический тип:" << std::endl;
	std::cout << "-bool \t\t- " << sizeof(bool) << " Б" << std::endl;
	std::cout << "-char \t\t- " << sizeof(char) << " Б" << std::endl;
	std::cout << "-char16_t \t- " << sizeof(char16_t) << " Б" << std::endl;
	std::cout << "-char32_t \t- " << sizeof(char32_t) << " Б" << std::endl;
	std::cout << "-wchar_t \t- " << sizeof(wchar_t) << " Б" << std::endl;
	std::cout << "-short \t\t- " << sizeof(short) << " Б" << std::endl;
	std::cout << "-int \t\t- " << sizeof(int) << " Б" << std::endl;
	std::cout << "-long \t\t- " << sizeof(long) << " Б" << std::endl;
	std::cout << "-long long \t- " << sizeof(long long) << " Б" << std::endl;
	std::cout << "\nВещественный арифметический тип:" << std::endl;
	std::cout << "-float \t\t- " << sizeof(float) << " Б" << std::endl;
	std::cout << "-double \t- " << sizeof(double) << " Б" << std::endl;
	std::cout << "-long double \t- " << sizeof(long double) << " Б" << std::endl;
	std::cin.get();
	return 0;
}