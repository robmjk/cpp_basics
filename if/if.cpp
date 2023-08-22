// if statement source

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// remember = datatype - variable - value of variable
	// creating the password and assigning the value
	string password = "Kribz1k";

	// asking user to enter password
	cout << "Enter your password: " << flush;

	// ask for user input
	string input;
	cin >> input;

	// check if the user's input is equal to the set password (this is a condition)
	if(input == password)
	{
		cout << "Logging in..." << endl;
	}

	if (input != password)
	{
		cout << "Access denied" << endl;
	}

	// check the value that has been inputted
	cout << "'" << input << "'" << endl;

	return 0;
}