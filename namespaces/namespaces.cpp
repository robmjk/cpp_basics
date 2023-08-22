// namespaces source

#include <iostream>
#include "Dog.h"
#include "Animals.h"

using namespace std; // not necessary if defining below

using namespace dogs; // not necessary if defining below

int main()
{
    Dog dog;
    dog.speak();

    animals::Dog dog2;
    dog2.speak();

    dogs::Dog dog3;
    dog3.speak();

    cout << dogs::DOGNAME << endl;
    cout << animals::DOGNAME << endl;

    return 0;
}