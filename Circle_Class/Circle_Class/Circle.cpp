#include "Circle.h"
#include <iostream>
using namespace std;

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

// Gets the radius of the particular circle and compares it.
bool operator<(const Circle& r1, const Circle& r2)
{
	return r1.getRadius() < r2.getRadius();
}