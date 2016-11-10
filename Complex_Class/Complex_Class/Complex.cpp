#include <iostream>
#include <cmath>
#include <sstream>
#include "Complex.h"
using namespace std;

// classic class constructors
Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(double a)
{
	this->a = a;
	b = 0;
}

Complex::Complex(double a, double b)
{
	this->a = a;
	this->b = b;
}

// these five are the working parts for this class, daing all the necessary computations
Complex Complex::add(const Complex& complex2) const
{
	double first = a + complex2.a;
	double second = b + complex2.b;
	return Complex(first, second);
}

Complex Complex::subtract(const Complex& complex2) const
{
	double first = a - complex2.a;
	double second = b - complex2.b;
	return Complex(first, second);
}

Complex Complex::multipy(const Complex& complex2) const
{
	double first = (a * complex2.a) - (b * complex2.b);
	double second = (b * complex2.a) + (a * complex2.b);
	return Complex(first, second);
}

Complex Complex::divide(const Complex& complex2) const
{
	double first = ((a * complex2.a) + (b * complex2.b)) / ((complex2.a * complex2.a) + (complex2.b * complex2.b));
	double second = ((b * complex2.a) - (a * complex2.b)) / ((complex2.a * complex2.a) + (complex2.b * complex2.b));
	return Complex(first, second);
}

double Complex::abs()
{
	double first = a * a;
	double second = b * b;
	double added = first + second;
	double root = sqrt(added);
	return root;
}

// Translates into a string saying "a + bi"
string Complex::toString() const
{
	stringstream ss;
	ss << a;
	if (b != 0)
	{
		ss << " + " << b << "i";
	}
	return ss.str();
}

// At first, I didn't know what this was supposed to do, and tried creating a getA and getB function.
double Complex::getRealPart()
{
	return a;
}

double Complex::getImaginaryPart()
{
	return b;
}

// Setting up for index 0 = a and index 1 = b
double& Complex::operator[](int index)
{
	if (index == 0)
		return a;
	else
		return b;
}

// Utilizes the computations
Complex& Complex::operator+=(const Complex& complex2)
{
	*this = add(complex2);
	return *this;
}

Complex& Complex::operator-=(const Complex& complex2)
{
	*this = subtract(complex2);
	return *this;
}

Complex& Complex::operator*=(const Complex& complex2)
{
	*this = multipy(complex2);
	return *this;
}

Complex& Complex::operator/=(const Complex& complex2)
{
	*this = divide(complex2);
	return *this;
}

// Not entirely sure why it's supposed to work like this, but here's prefix ++ and --,
Complex& Complex::operator++()
{
	a += b;
	return *this;
}

Complex& Complex::operator--()
{
	a -= b;
	return *this;
}

// and postfix ++ and --.
Complex& Complex::operator++(int dummy)
{
	Complex temp(a, b);
	a += b;
	return temp;
}

Complex& Complex::operator--(int dummy)
{
	Complex temp(a, b);
	a -= b;
	return temp;
}

// Defining unary + and -.
Complex Complex::operator+()
{
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-a, b);
}

// Surprisingly similar to the toString function...
ostream& operator<<(ostream& out, const Complex& complex)
{
	if (complex.b == 0)
		out << complex.a;
	else
		out << complex.a << " + " << complex.b << "i";
	return out;
}

istream& operator>>(istream& in, Complex& complex)
{
	cout << "Enter complex number a: ";
	in >> complex.a;

	cout << "Enter complex number b: ";
	in >> complex.b;
	return in;
}

// Main operators, nonmeber of course.
Complex operator+(const Complex& r1, const Complex& r2)
{
	return r1.add(r2);
}

Complex operator-(const Complex& r1, const Complex& r2)
{
	return r1.subtract(r2);
}

Complex operator*(const Complex& r1, const Complex& r2)
{
	return r1.multipy(r2);
}

Complex operator/(const Complex& r1, const Complex& r2)
{
	return r1.divide(r2);
}