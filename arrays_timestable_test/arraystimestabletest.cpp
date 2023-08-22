// arrays 12x table test

#include <iostream>

using namespace std;

int main()

{
	int twelveTimesTable[13] = { 0, 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144 };

	cout << "The Twelve Times Table" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < 13; i++)
	{
		cout << "12 x " << i << ": " << twelveTimesTable[i] << endl;
	}

	return 0;
}

// ez
