// person source

#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;

Person::Person()
{
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge)
{
	name = newName;
	age = newAge;
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

