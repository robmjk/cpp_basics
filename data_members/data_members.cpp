// data members source

#include <iostream>
#include "cat.h"

using namespace std;

int main()
{
	cat timmy;
	timmy.makeHappy();
	timmy.speak();

	cat punky;
	punky.makeSad();
	punky.speak();

	return 0;
}

