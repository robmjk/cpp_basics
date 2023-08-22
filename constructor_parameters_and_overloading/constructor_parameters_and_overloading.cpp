// constructor parameters and overloading 

#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;

int main()
{
    // objects 
    // creating an object from a class we are "instantiating" the class
    // looking at the header file for Person(); in public class that takes no parameters
    Person person1;
    // looking at the header file for Person(string newName) in public class that takes string parameter
    // each person (person1, person2 etc...) is to match the parameters given in other file
    Person person2("Kribz1k");
    Person person3("Timmy", 8);

    // person's will output the values based on the parameters above
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    return 0;
}