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
	// default constructor - this is an intiliazation list
	Person(): name("unnamed"), age(0) {};
	// parameter constructor that takes name and age - another initialization list
	Person(string name, int age) : name(name), age(age) {};
	// toString method which returns information about our object as a string
	// used in the main function to output information about the objects in the function
	string toString();
};

