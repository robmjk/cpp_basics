// while loops source

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// start loop counter at 0
	int i = 0;

	// runs through program 5 times (0, 1, 2, 3, 4, 5)
	while(i < 5)
	{
		cout << "Kribz1k " << i << endl;

		// everytime the value of i is generated the value of i gets bigger by 1
		i = i + 1;

		// the same as i = i + 1; but shorter and neater (increments i by 1)
		i++;
	}

	cout << "Program quitting..." << endl;

	return 0;
}