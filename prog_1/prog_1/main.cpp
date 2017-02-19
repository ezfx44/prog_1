#include <iostream>
#include <type_traits>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "\t\t������� ��������������� ����� ������ � ����� C++\n���������� �������������� ���:" << std::endl;
	std::cout << "-bool \t\t- " << sizeof(bool) << " �" << std::endl;
	std::cout << "-char \t\t- " << sizeof(char) << " �" << std::endl;
	std::cout << "-char16_t \t- " << sizeof(char16_t) << " �" << std::endl;
	std::cout << "-char32_t \t- " << sizeof(char32_t) << " �" << std::endl;
	std::cout << "-wchar_t \t- " << sizeof(wchar_t) << " �" << std::endl;
	std::cout << "-short \t\t- " << sizeof(short) << " �" << std::endl;
	std::cout << "-int \t\t- " << sizeof(int) << " �" << std::endl;
	std::cout << "-long \t\t- " << sizeof(long) << " �" << std::endl;
	std::cout << "-long long \t- " << sizeof(long long) << " �" << std::endl;
	std::cout << "\n������������ �������������� ���:" << std::endl;
	std::cout << "-float \t\t- " << sizeof(float) << " �" << std::endl;
	std::cout << "-double \t- " << sizeof(double) << " �" << std::endl;
	std::cout << "-long double \t- " << sizeof(long double) << " �" << std::endl;
	std::cin.get();
	return 0;
}