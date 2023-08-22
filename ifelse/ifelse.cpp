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

	// if value is less than 3
	if(value < 3)
	{
		cout << "Insufficient privileges to use these menu options..." << endl;
	}
	else {
		cout << "Privilege level: sufficient" << endl;
	}

	// if value is equal to 5
	if (value == 5)
	{
		cout << "Quitting..." << endl;
	}
	else {
		cout << "Not quitting" << endl;
	}

	return 0;
}
