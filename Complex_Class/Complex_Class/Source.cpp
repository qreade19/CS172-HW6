#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

int main()
{
	double a;
	double b;
	cout << "Enter the first complex number: ";
	cin >> a >> b;
	Complex r1(a, b);
	cout << "Enter the second complex number: ";
	cin >> a >> b;
	Complex r2(a, b);

	cout << r1 << " + " << r2 << " = " << r1 + r2 << "i" << endl;
	cout << r1 << " - " << r2 << " = " << r1 - r2 << "i" << endl;
	cout << r1 << " * " << r2 << " = " << r1 * r2 << "i" << endl;
	cout << r1 << " / " << r2 << " = " << r1 / r2 << "i" << endl;
	cout << "|" << r1 << "| = " << r1.abs() << endl;
}