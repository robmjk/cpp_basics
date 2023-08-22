// pointers source

#include <iostream>

using namespace std;

// copying the address of dValue into pvalue here 
void manipulate(double *pValue)
{
    // dereferncing the pointer and outputting the value at that (dValue) address
    cout << "2. Value of double in manipulate: " << *pValue << endl;
    // changing value which right now happens to be a copy of the dValue as it has been passed to this function
    *pValue = 10.0;
    cout << "3. Value of double in manipulate: " << *pValue << endl;
}

int main()
{

    cout << "First Program" << endl;
    cout << "=============" << endl;

    int nValue = 8;

    // * - pointing to an int
    // & - can read as getting address to pointer
    // assigning nValue memory address to pnValue
    int *pnValue = &nValue;

    cout << "Int value: " << nValue << endl;

    // memory location the nValue int
    cout << "Pointer to int address: " << pnValue << endl;

    // dereferencing the pointer which gives us the value that the pointer refers to
    cout << "Int value via pointer: " << *pnValue << endl;
    


    cout << "----------------------------------------" << endl;
    
    cout << "Second Program" << endl;
    cout << "===============" << endl;

    double dValue = 123.4;

    // current value is 123.4
    cout << "1. dValue: " << dValue << endl;

    // passing this value into pointer in void function
    manipulate(&dValue);

    // we went to the address and changed the value in the void function
    cout << "4. dValue: " << dValue << endl;


    return 0;
}

