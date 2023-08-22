// return values source

#include <iostream>

using namespace std;

// function 1 (void means no return type)
void menuSelection()
{
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
}

// function 2
// int function allows us to use this function in main calling function
int searchRecord()
{
    cout << "Enter selection: " << flush;

    int input;
    cin >> input;

    return input;
}

// main function which is executing all functions above
int main()
{
    menuSelection();
    // this int input is completely seperate and different from the int input in "searchRecord" function
    // renaming to selection
    int selection = searchRecord();

    switch (selection)
    {
    case 1:
        cout << "Searching..." << endl;
        break;
    case 2:
        cout << "Viewing record" << endl;
        break;
    case 3:
        cout << "Quitting..." << endl;
        break;
    default:
        cout << "Invalid input. Please choose item from the given menu" << endl;
    }

    return 0;
}