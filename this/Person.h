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
	// default constructor
	Person();
	// parameter constructor that takes name and age
	Person(string name, int age);
	// toString method which returns information about our object as a string
	// used in the main function to output information about the objects in the function
	string toString();
};

