// references.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// using ampersand & to grab the value from double value in main function - referencing an existing variable
void changeSomething(double &value)
{
    value = 123.4;
}

int main()
{
    int value1 = 8;
    // grabbing the address of value 1 and changing it to 10 just like value 2
    int &value2 = value1;
    value2 = 10;

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;

    double value = 4.321;
    changeSomething(value);
    cout << value << endl;

    return 0;
}