// sizeofmultidimensionalarrays source

#include <iostream>

using namespace std;

int main()
{
	string animals[][3] = {

		{"dog", "lion", "hippo"},
		{"cat", "mouse", "bird"}

	};
	
	// each element in the array is 8 bytes each and there are 6 elements in the array, therefore (8x6 = 48 bytes in the array)
	// in my case, each element is 40 bytes, first array [0] is 120 bytes
	// cout << sizeof(animals[0]) << endl;

	// size of the total array divided by the size of both sub arrays
	for (int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++)
	{
		// size of sub array divided by size of the items we have in it
		for (int j = 0; j < sizeof(animals[0])/sizeof(string); j++)
		{
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}

