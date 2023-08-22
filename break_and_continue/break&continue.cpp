// break and continue source

#include <iostream>

using namespace std;

int main()
{
	/*
	// using "break"
	for (int i=0; i<5; i++)
	{
		cout << " i is: " << i << endl;

		// break jumps immediately out of the loop
		if (i == 3)
		{
			break;
		}
		// will not be displayed when run because it's within the loop
		cout << "Looping..." << endl;
	}

	cout << "Program quitting..." << endl;
	*/


	/**
	// using "continue"
	for (int i = 0; i < 5; i++)
	{
		cout << " i is: " << i << endl;

		// "continue" continues to execute the code within the loop except for the code after "continue"
		if (i == 3)
		{
			continue;
		}
		// will not be displayed when run because it's within the loop
		cout << "Looping..." << endl;
	}

	cout << "Program quitting..." << endl;
	**/


	// const will make sure this value cannot be changed ever
	const string password = "hello";

	// create a string datatype with the variable called "input" which will ask for the user's input for the password
	string input;

	do {
		// system outputs that a password is required from the user
		cout << "Enter your password: " << flush;
		cin >> input;

		// check to see if the password is correct, if correct break out of this loop into access granted
		if (input == password) {
			break;
		}
		// if password is wrong, break will not occur and print this string
		else {
			cout << "Access denied...prepare to be swatted" << endl;
		}
	}
	// if the password is wrong, then this condition is true, and it will keep looping. if the condition is false, then it would only initiate the loop once, therefore password input being correct
	while (true);

	cout << "Access granted...loading CIA database" << endl;

	cout << "Program quitting..." << endl;

	return 0;

}


