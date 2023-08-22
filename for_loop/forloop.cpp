// for loop source

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// "for" produces an infinite loop of the following
	// semi-colon (;) divides the values in the brackets into 3 sections 
	// 1st value runs first, then followed by 2nd and 3rd
	// 1. i will start at 0 - 2. loop will keep going while i remains less than 10 - 3. once loop finishes, i will increase by 1
	for (int i=0; i<10; i++)
	{

		cout << "Testing " << i << endl;

	}

	return 0;
}