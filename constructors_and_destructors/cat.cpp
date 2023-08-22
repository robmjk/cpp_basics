// cat source

#include "cat.h"
#include <iostream>

using namespace std;

// cat constructor from cat class
cat::cat()
{
	cout << "Cat created" << endl;

	// initializing happy variable
	happy = true;
}

// cat destructor from cat class (destructor always called at end of program)
cat::~cat()
{
	cout << "Cat destroyed" << endl;
}

void cat::speak()
{
	if (happy) {
		cout << "Meowww!!!" << endl;
	}
	else {
		cout << "Hsssss!!!" << endl;
	}
}