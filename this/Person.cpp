// person source

#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;

Person::Person()
{
	age = 0;
	name = "";
}

Person::Person(string name, int age)
{
	// to refer to the name that's a part of the class we use this-> (rather than making name newName)
	// better this way because you're using the same variable for name as you would newName
	this->name = name;
	this->age = age;

	cout << "Memory location of object: " << this << endl;
}

string Person::toString()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << " - Age: ";
	ss << age;

	return ss.str();
}


