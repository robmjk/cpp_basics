// input source

#include <iostream>

using namespace std;

int main()

{
	// remember = datatype - variable - value of variable
	// flush does NOT create a new line character
	cout << "enter your name: " << flush;

	string input1;

	// instead of the program generating a "character output", i am generating a "character input"
	// ">>" extraction operator - it is extracting information from the input
	cin >> input1;

	// enter an input as requested
	cout << "You entered: " << input1 << endl;

	// emter a number as requested
	cout << "Enter a number: " << flush;
	int value1;
	cin >> value1;
	cout << "You entered: " << value1 << endl;

	return 0;
}