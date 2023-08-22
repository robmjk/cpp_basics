// person header source

#pragma once

#include <iostream>

using namespace std;

class person
{
private:
	string name;
public:
	person();
	string toString();
	void setName(string newName);
	string getName();
};

