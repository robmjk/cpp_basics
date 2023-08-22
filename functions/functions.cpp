// functions source

#include <iostream>

using namespace std;

// function 1 (void means no return type)
void menuSelection()
{
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
}

// function 2 (void means no return type)
void searchRecord()
{
    cout << "Enter selection: " << flush;

    int input;
    cin >> input;

    switch (input)
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
}

// main function which is executing all functions above
int main()
{
    menuSelection();
    searchRecord();

    return 0;
}

