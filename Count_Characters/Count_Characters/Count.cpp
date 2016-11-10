// Quinlan Reade
// HW 06
// Assignment 2

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream num;
	string filename;
	cout << "Enter any file name: ";
	cin >> filename;
	num.open(filename);

	if (num.fail())
	{
		cout << "This file either cannot be opened or doesn't exist." << endl;
		return 0;
	}

	char found;
	int counter = 0;
	while (num >> found)
	{
		counter++;
	}

	num.close();
	return 0;
}