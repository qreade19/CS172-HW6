#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double a);
	Complex(double a, double b);
	Complex add(const Complex& complex2) const;
	Complex subtract(const Complex& complex2) const;
	Complex multipy(const Complex& complex2) const;
	Complex divide(const Complex& complex2) const;
	double abs();
	string toString() const;
	double getRealPart();
	double getImaginaryPart();

	// Initialized operator []
	double& operator[](int index);

	// Initialized function operators
	Complex& operator+=(const Complex& complex2);
	Complex& operator-=(const Complex& complex2);
	Complex& operator*=(const Complex& complex2);
	Complex& operator/=(const Complex& complex2);

	// Defined Prefix ++ and --
	Complex& operator++();
	Complex& operator--();

	// Defined Postfix ++ and --
	Complex& operator++(int dummy);
	Complex& operator--(int dummy);

	// Defined unary + and -
	Complex operator+();
	Complex operator-();

	// Defined << and >>
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
private:
	double a;
	double b;
};

Complex operator+(const Complex& r1, const Complex& r2);
Complex operator-(const Complex& r1, const Complex& r2);
Complex operator*(const Complex& r1, const Complex& r2);
Complex operator/(const Complex& r1, const Complex& r2);

#endif