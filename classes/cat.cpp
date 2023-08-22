// cat source

#include <iostream>
#include "cat.h"

using namespace std;

// using cat:: is saying that this function belongs to the "cat" class in cat.h file
void cat::speak()
{
	cout << "Meowww!!!" << endl;
}

void cat::jump()
{
	cout << "jumping to top of bookcase" << endl;
}