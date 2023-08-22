// pointers and arrays source 

#include <iostream>

using namespace std;

int main()
{
    string texts[] = { "one", "two", "three" };

    // knows it's pointing to a string of arrays but not how many elements in that array
    string *pTexts = texts;

    // outputs amount of elements in the array
    cout << sizeof(texts) / sizeof(string) << endl;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
    {
        // iterates through an array
        cout << pTexts[i] << " " << flush;
    }

    // nice spacing
    cout << endl;

    // adding pTexts++ to increment through the array
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++)
    {
        cout << *pTexts << " " << flush;
    }

    cout << endl;

    string *pStart = &texts[0];
    // pointing to last value in the array
    // getting last value in the array and then getting the address of it
    string *pEnd = &texts[2];

    // iterates through the array from start and breaks after last value in array
    while (true)
    {
        cout << *pStart << " " << flush;

        if (pStart == pEnd)
        {
            break;
        }
        pStart++;
    }

    return 0;
}
