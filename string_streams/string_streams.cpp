// string streams source

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    // string streams allow us to concatenate different types of data (e.g. double and a string into a single string)
    string name = "Rob";
    int age = 32;

	// cannot concatenate an int with a string
    // string info = "Name: " + name + "Age: " + age;

    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << " & Age is: ";
    ss << age;

    // .str method of string stream converts it to an actual string
    string info = ss.str();
    cout << info << endl;

    return 0;
}
