// getters and setters source

#include <iostream>
#include "person.h"

using namespace std;

int main()
{
	person person1;

	person1.setName("Spunkii");

	cout << person1.toString() << endl;

	cout << "Name of person with get method: " << person1.getName() << endl;

	return 0;
}