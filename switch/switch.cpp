// switch source

#include <iostream>

using namespace std;

int main()
{
	int value = 5;

	// a switch in C++ is a control statement that allows you to choose between different cases based on the value of an expression.
	switch (value)
	{
	case 4: 
		cout << "Value is 4" << endl;
		break;
	case 5: 
		cout << "Value is 5" << endl;
		break;
	case 6:
		cout << "Value is 6" << endl;
		break;
	default:
		cout << "Value unrecognized" << endl;
	}
	return 0;
}