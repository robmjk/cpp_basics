// person header source

#include <iostream>
#include <sstream>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	// constructor
	Person();
	// assigning name from above to the constructor carrying the newName
	Person(string newName) {name = newName; age = 0;};
	Person(string newName, int newAge);
	string toString();
};

