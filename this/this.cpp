// this source

#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;

int main()
{
    Person person1;
    Person person2("Kribz1k", 22);
    Person person3("Fozz", 22);

    // addressing person/s and accessing its memory to output memory value
    cout << person2.toString() << " - memory location: " << &person2 << endl;
    cout << person3.toString() << " - memory location: " << &person3 << endl;

    return 0;
}
