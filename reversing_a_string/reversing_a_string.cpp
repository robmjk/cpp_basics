// reversing a string

#include <iostream>

using namespace std;

int main()
{
    char text[] = "hello";

    // len being the size of the array
    // using -1 to get rid of the null terminator being created by the "" value of the string
    int nChars = sizeof(text)-1;

    char *pStart = text;
    // pointing to the end + 0 - 1
    char *pEnd = text + nChars - 1;

    while (pStart < pEnd)
    {
        // saving (to save variable) the location of pStart which is "h", and then we swap it with the last character "o"
        char save = *pStart;
        // swapping the thing pointed to by start to the thing pointed to by end (pStart is now "o")
        *pStart = *pEnd;
        // save whatever pEnd points at and set it equal to the character we saved from the start (pEnd is now "h")
        // reversed
        *pEnd = save;

        pStart++;
        pEnd--;
    }
    cout << text << endl;

    return 0;
}
