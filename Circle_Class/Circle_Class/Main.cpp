#include "Circle.h"
#include <iostream>
using namespace std;

// Simple test, showing how the function compares circles.
int main()
{
	Circle c1(2);
	Circle c2(5);
	bool isLess = (c1 < c2);
	cout << boolalpha << isLess << endl;
}