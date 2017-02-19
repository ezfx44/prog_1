#include "Complex.h"

int main()
{
	Complex val1(2, 3);
	Complex val2(8, 3);
	val1.print();
	val1.add(val2);
	val1.print();
	val1.sub(val2);
	val1.print();
	val1.multipl(3);
	val1.print();
	val1.div(2);
	val1.print();
	std::cin.get();
	return 0;
}