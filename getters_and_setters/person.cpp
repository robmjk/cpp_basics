// person source

#include <iostream>
#include "person.h"

using namespace std;

person::person()
{
	name = "Kribz1k";
}

string person::toString()
{
	return "Person's name is: " + name;
}

void person::setName(string newName)
{
	name = newName;
}

string person::getName()
{
	return name;
}