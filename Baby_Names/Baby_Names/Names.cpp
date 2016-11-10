#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// sets up the variables for user input
	ifstream names;
	int year;
	char gender;
	string name;

	// Aforementioned user input 
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the gender (M or F): ";
	cin >> gender;
	cout << "Enter the name: ";
	cin >> name;

	// For this, I had it so that the program would read in information from the file and input it into these variables and arrays.
	// Since these can be written over for any new use, they can be reused.
	// Since the number of times each name appears has no use in this, I felt no need to actually store them.
	int rank = 0;
	string mName[1001];
	string numName;
	string fName[1001];
	string nName;


	if (year == 2010)
	{
		names.open("C:\\Users\\Quinlan Reade\\Downloads\\Babynameranking2010.txt");

		if (!names)
		{
			cout << "File won't open." << endl;
			return 0;
		}

		// This keeps going as long as this order of variables are found (at least, it's supposed to).
		while (!names.eof())
		{
			names >> rank;
			names >> mName[rank - 1];
			names >> numName;
			names >> fName[rank - 1];
			names >> nName;
		}
		
		// Then these two run through the array until the desired name is found.
		if (gender == 'M' || 'm')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (mName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2010" << endl;
				}
				if (i == 1000 && mName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}

		if (gender == 'F' || 'f')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (fName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2010" << endl;
					break;
				}
				if (i == 1000 && fName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}
		names.close();
	}

	// All of these are pretty much the same as the first.
	else if (year == 2011)
	{
		names.open("C:\\Users\\Quinlan Reade\\Downloads\\Babynameranking2011.txt");

		if (!names)
		{
			cout << "File won't open." << endl;
			return 0;
		}

		while (names >> rank >> mName[rank] >> numName >> fName[rank] >> nName)
		{
			names >> rank;
			names >> mName[rank - 1];
			names >> numName;
			names >> fName[rank - 1];
			names >> nName;
		}

		if (gender == 'M' || 'm')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (mName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2011" << endl;
				}
				if (i == 1000 && mName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}

		if (gender == 'F' || 'f')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (fName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2011" << endl;
					break;
				}
				if (i == 1000 && fName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}
		names.close();
	}

	else if (year == 2012)
	{
		names.open("C:\\Users\\Quinlan Reade\\Downloads\\Babynameranking2012.txt");

		if (!names)
		{
			cout << "File won't open." << endl;
			return 0;
		}

		while (names >> rank >> mName[rank] >> numName >> fName[rank] >> nName)
		{
			names >> rank;
			names >> mName[rank - 1];
			names >> numName;
			names >> fName[rank - 1];
			names >> nName;
		}

		if (gender == 'M' || 'm')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (mName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2012" << endl;
				}
				if (i == 1000 && mName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}

		if (gender == 'F' || 'f')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (fName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2012" << endl;
					break;
				}
				if (i == 1000 && fName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}
		names.close();
	}

	else if (year == 2013)
	{
		names.open("C:\\Users\\Quinlan Reade\\Downloads\\Babynameranking2013.txt");

		if (!names)
		{
			cout << "File won't open." << endl;
			return 0;
		}

		while (names >> rank >> mName[rank] >> numName >> fName[rank] >> nName)
		{
			names >> rank;
			names >> mName[rank - 1];
			names >> numName;
			names >> fName[rank - 1];
			names >> nName;
		}

		if (gender == 'M' || 'm')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (mName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2013" << endl;
				}
				if (i == 1000 && mName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}

		if (gender == 'F' || 'f')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (fName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2013" << endl;
				}
				if (i == 1000 && fName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}
		names.close();
	}

	else if (year == 2014)
	{
		names.open("C:\\Users\\Quinlan Reade\\Downloads\\Babynameranking2014.txt");

		if (!names)
		{
			cout << "File won't open." << endl;
			return 0;
		}

		while (names >> rank >> mName[rank] >> numName >> fName[rank] >> nName)
		{
			names >> rank;
			names >> mName[rank - 1];
			names >> numName;
			names >> fName[rank - 1];
			names >> nName;
		}

		if (gender == 'M' || 'm')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (mName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2014" << endl;
				}
				if (i == 1000 && mName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}

		if (gender == 'F' || 'f')
		{
			for (int i = 0; i < 1000; i++)
			{
				if (fName[i] == name)
				{
					cout << name << " is ranked #" << i + 1 << " in the year 2014" << endl;
				}
				if (i == 1000 && fName[i] != name)
				{
					cout << "The name " << name << " is not ranked for this year." << endl;
				}
			}
		}
		names.close();
	}

	// All except this, which shows the following error should a list that isn't included be called for.
	else
	{
		cout << "This year is not in our data." << endl;
	}

	return 0;
}