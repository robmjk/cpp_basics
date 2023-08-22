// floating point types source

#include <iostream>
#include <string>
// iomanip is input and output manipulation
#include <iomanip>

using namespace std;

int main()

{
	// remember = datatype - variable - value of variable
	// a float is a data type used to store decimal numbers with limited precision.
	float fValue = 76.4;

	// fixed is from iomanip
	cout << fixed << fValue << endl;
	// outputs value in scientific notation
	cout << scientific << fValue << endl;
	// outputs 20 specific decimal values 
	cout << setprecision(20) << fixed << fValue << endl; 

	// calculate maximum size of float (will output value 4 which is 4 bytes in the computer's memory)
	cout << "Sizeof float: " << sizeof(float) << endl;

	// more precision for the value using double
	double dValue = 76.4;
	cout << setprecision(20) << fixed << dValue << endl;

	// even more precision using long double
	long double lValue = 123.456789876543210;
	cout << setprecision(20) << fixed << lValue << endl;
	// outputs a value of 8 - therefore using 8 bytes in the computer's memory
	cout << "Sizeof long double: " << sizeof(lValue) << endl;

	return 0;
}
