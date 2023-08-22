// if else statement source

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// remember = datatype - variable - value of variable
	// \t will implement a tab which is an invisible character
	cout << "1. \tAdd new record" << endl;
	cout << "2. \tDelete record" << endl;
	cout << "3. \tView record" << endl;
	cout << "4. \tSearch record" << endl;
	cout << "5. \tQuit record" << endl;

	cout << "Enter your selection: " << flush;

	// create a new variable (value)
	int value;
	// ask for user to input value
	cin >> value;

	if (value == 1)
	{
		cout << "Adding new record..." << endl;
	}
	else if (value == 2)
	{
		cout << "Deleting record..." << endl;
	}
	else if (value == 3)
	{
		cout << "Viewing record..." << endl;
	}
	else if (value == 4)
	{
		cout << "Searching record..." << endl;
	}
	else if (value == 5)
	{
		cout << "Quitting record..." << endl;
	}
	else {
		cout << "Invalid option" << endl;
	}

	return 0;
}