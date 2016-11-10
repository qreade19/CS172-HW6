#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();

private:
	double radius;
	static int numberOfObjects;
};

// This is the only thing that's mine.
bool operator<(const Circle& r1, const Circle& r2);

#endif