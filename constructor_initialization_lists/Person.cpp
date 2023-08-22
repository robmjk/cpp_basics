// person source

#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;

string Person::toString()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << " - Age: ";
	ss << age;

	return ss.str();
}


