// integer types source

#include <iostream>
#include <string>
// limits shows the maximum value that can be stored in an integer
#include <limits>

using namespace std;

int main()
{
	// remember = datatype - variable - value of variable
	int value1 = 80000;
	cout << value1 << endl;

	// shows the maximum value that can be stored in an integer
	cout << "Max int value: " << INT_MAX << endl;
	// shows the minimum value that can be stored in an integer
	cout << "Min int value: " << INT_MIN << endl;

	// create a bigger integer than its original max value
	long int lValue = 2345325345345;
	cout << lValue << endl; 

	// create a smaller integer than its original min value
	short int sValue = 23434; 
	cout << sValue << endl;

	// operator to find out how much memory these types use
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	// unsigned only allows positive numbers (meaning it can store a bigger number in it because it does not need to use one bit internally to represent a negative or positive sign).
	unsigned int uValue = 2342343; 
	cout << uValue << endl;

	return 0;

}