// arrays and functions source

#include <iostream>

using namespace std;

// could declare variables here to be used in any function below
string numbers[] = { "one", "two", "three" };

void show1(const int nElements, string texts[])
{
    // cout << sizeof(texts) << endl; - returns sizeof pointer

    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts)
{
    // cout << sizeof(texts) << endl; - returns sizeof pointer

    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[3])
{
    // cout << sizeof(texts) << endl; - returns sizeof pointer

    for (int i = 0; i < sizeof(texts)/sizeof(string); i++)
    {
        cout << texts[i] << endl;
    }
}

string* getArray()
{
    // string texts[] = { "one", "two", "three" }; // Don't return pointers to local variables

    return numbers;
}

char* getMemory()
{
    char* pMem = new char[100];

    return pMem;
}

void freeMemory(char* pMem)
{
    delete[] pMem;
}

int main()
{
    string texts[] = { "apple", "orange", "banana" };

    cout << sizeof(texts) << endl;

    show3(texts);

    char* pMemory = getMemory();
    freeMemory(pMemory); 

    delete[] pMemory;

    return 0;
}


