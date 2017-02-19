#include <iostream>

class Complex
{
private:
	double real, imaginary;
public:
	Complex() {};
	Complex(double re)
	{
		real = re;
		imaginary = 0;
	}
	Complex(double re, double im)
	{
		real = re;
		imaginary = im;
	}
	void print()
	{
		std::cout << real << " + " << imaginary << "i" << std::endl;
	}
	Complex add(Complex &a)
	{
		real += a.real;
		imaginary += a.imaginary;
		return Complex(real, imaginary);
	}
	Complex sub(Complex &a)
	{
		real -= a.real;
		imaginary -= a.imaginary;
		return Complex(real, imaginary);
	}
	Complex multipl(int a)
	{
		real *= a;
		imaginary *= a;
		return Complex(real, imaginary);
	}
	Complex div(int a)
	{
		real /= a;
		imaginary /= a;
		return Complex(real, imaginary);
	}
};
