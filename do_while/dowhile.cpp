// do while loop source

#include <iostream>

using namespace std;

int main()
{
	// const will make sure this value cannot be changed ever
	const string password = "hello";

	// create a string datatype with the variable called "input" which will ask for the user's input for the password
	string input;

	do {
		// system outputs that a password is required from the user
		cout << "Enter your password: " << flush;
		cin >> input;

		//check to see if the password is wrong
		if (input != password) {
			cout << "Access denied...prepare to be swatted" << endl;
		}
	}

		// if the password is wrong, then this condition is true, and it will keep looping. if the condition is false, then it would only initiate the loop once, therefore password input being correct
		while (input != password);

	cout << "Access granted...loading CIA database" << endl;

	return 0;
}
