// complex conditions source
// conditions that are made up of more than one clause

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// how to start and end a multiline comment
	/*
	* == equals
	* != not equals
	* < less than
	* > greater than
	* <= less than or equal to
	* >= greater than or equal to
	* && and
	* || or
	*/

	int value1 = 7;
	int value2 = 4;

	if (value1 >= 7)
	{
		cout << "Condition 1: true" << endl;
	}
	else
	{
		cout << "Condition 1: false" << endl;
	}

	if (value1 == 7 && value2 < 3)
	{
		cout << "Condition 2: true" << endl;
	}
	else
	{
		cout << "Condition 2: false" << endl;
	}

	if (value1 == 7 || value2 == 4)
	{
		cout << "Condition 3: true" << endl;
	}
	else
	{
		cout << "Condition 3: false" << endl;
	}

	if (value2 != 8 && value1 == 10 || value1 < 10)
	{
		cout << "Condition 4: true" << endl;
	}
	else
	{
		cout << "Condition 4: false" << endl;
	}

	// bool is a data type representing a value that can be either true or false.
	bool condition1 = (value2 != 8) && (value1 == 10);
	// check to see if boolean variable is true or false
	cout << condition1 << endl;

	bool condition2 = value1 < 10;
	cout << condition2 << endl; 

	// checking if EITHER of these conditions are true (one of them is true, therefore returns true)
	if (condition1 || condition2)
	{
		cout << "Condition 5: true" << endl;
	}
	else
	{
		cout << "Condition 5: false" << endl;
	}

	return 0;
}
