// arrays source

#include <iostream>

using namespace std;

int main()
{
	// creating a title no. 1
	cout << "Array of integers" << endl;
	cout << "=================" << endl;

	// an array is a list of values contained in one variable (here is 3 elements in the array list)
	int values[3];

	// to access the first element (0 being the first element)
	values[0] = 8;
	values[1] = 12;
	values[2] = 4;

	// if value not specified above, random value will be thrown from computer's memory
	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	// creating a title no. 2
	cout << endl <<  "Array of doubles" << endl;
	cout << "================" << endl;

	// intialize the list of 4 arrays with set values
	double numbers[4] = {4.5, 2.3, 7.2, 8.1};

	// looping over all the array values
	for (int i = 0; i < 4; i++)
	{
		cout << "Elements at index " << i << ": " << numbers[i] << endl;
	}

	// creating a title no. 3
	cout << endl << "Initializing with 0 values" << endl;
	cout << "================" << endl;
	
	// setting all 8 array values to 0 with empty curly brackets
	int numberArray[8] = {};

	for (int i = 0; i < 4; i++)
	{
		cout << "Elements at index " << i << ": " << numberArray[i] << endl;
	}

	// creating a title no. 4
	cout << endl << "Initializing with strings" << endl;
	cout << "================" << endl;

	// array of strings
	string texts[] = { "kribz1k", "toby", "rocky", "gizmo" };

	for (int i = 0; i < 4; i++)
	{
		cout << "Elements at index " << i << ": " << texts[i] << endl;
	}

	return 0;
}

