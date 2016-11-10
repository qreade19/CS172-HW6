// Quinlan Reade
// HW 06
// Assignment 1

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
	ofstream text;

	// Create file
	text.open("Exercise13_1.txt", ios::app);

	// Just in case.
	// Pretty sure that the app tag prevents this from being a possibility, but better safe than sorry.
	if (text.fail())
	{
		cout << "Can't open file." << endl;
		return 0;
	}

	// Creates a random number between 1 and 100 and sends it to the text file
	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 100;
		text << num << " ";
	}

	text.close();
	return 0;
}