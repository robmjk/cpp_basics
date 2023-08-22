// headers and prototypes source

#include <iostream>
// double quotes "" are used when including a file from the project
#include "utils.h"

using namespace std;

// prototype
// this is called a prototype, and it shows how the function operates and what it returns and what it accepts
// compiler allows us to call this function to use in functions below

int main()
{
    doSomething();
    doSomething();

    return 0;
}

void doSomething()
{
    cout << "hello" << endl;
}
