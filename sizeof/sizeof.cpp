// sizeof source

#include <iostream>

using namespace std;

int main()
{
	int values[] = {4, 7, 3, 4};

	// displays 16 bytes, each int is 4 bytes and we have 4 ints above (4x4 = 16)
	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	// "/" dividing the variables
	for (int i = 0; i < sizeof(values)/sizeof(int); i++)
	{
		cout << values[i] << " " << flush;
	}

	return 0;
}


