// multidimensional-arrays source

#include <iostream>

using namespace std;

int main()
{
	// each of the "2" rows is going to have "3" columns in it
	// intializing the arrays rather than declaring it later (just more efficient this way
	// the array has "2" elements, with "3" elements in it
	string animals[2][3] = {
		{"dog", "lion", "hippo"},
		{"cat", "mouse", "bird"}
	};
	// 2 elements in the outer arrays
	for (int i = 0; i < 2; i++)
	{
		// iterating over the 3 inner arrays
		for (int j = 0; j < 3; j++)
		{
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}