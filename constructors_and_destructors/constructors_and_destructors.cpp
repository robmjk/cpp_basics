// constructors and destructors source
// constructor is a special member function of a class that is automatically called when an object of the class is created. It initializes the object's data members and performs setup tasks.
// destructor is a special member function of a class that is automatically called when an object of the class is destroyed. It performs cleanup tasks and releases resources used by the object.

#include <iostream>
#include "cat.h"

using namespace std;

int main()
{
    cout << "Starting program..." << endl;

    // cat only exists now within those curly brackets - therefore we cannot call ricky after the bracket - destructor will now initiate after curly bracket because it is part of the cat class
    {
        cat ricky;
        ricky.speak();
    }

    cout << "Ending program..." << endl;

    return 0;
}