// cat source

#include <iostream>
#include "cat.h"

using namespace std;

void cat::speak()
{
	if (happy) {
		cout << "Meowww!!!" << endl;
	}
	else {
		cout << "Hsssss!!!" << endl;
	}
}

// can use "happy" from private specifier because we are involving the "cat" class from the header file here - therefore it is still part of the class and being accessed outside of it
void cat::makeHappy()
{
	happy = true;
}

void cat::makeSad()
{
	happy = false;
}