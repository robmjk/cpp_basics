// char arrays source

#include <iostream>

using namespace std;

int main()
{
    // invisible 0 at the end of the string because h starts at 0, e at 1 etc...
    char text[] = "hello"; 

    for (int i = 0; i < sizeof(text); i++)
    {
        cout << i << ": " << text[i] << endl;
    }

    // start k at 0
    int k = 0;

    // if k = 0 (0 being the last invisible character in the loop, break out of it)
    while (true)
    {
        if (text[k] == 0)
            break;

        cout << text[k] << flush;

        k++;
    }

    return 0;
}