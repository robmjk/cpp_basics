// allocating memory source

#include <iostream>

using namespace std;

class Animal
{
private:
    // name instance variable
    string name;

public:
    // constructor
    Animal()
    {
        cout << "Animal created" << endl;
    }

    // copy constructor
    Animal(const Animal& other) : name(other.name)
    {
        cout << "Animal created by copying" << endl;
    }

    // destructor
    ~Animal()
    {
        cout << "Destructor called" << endl;
    }

    // setName method
    void setName(string name)
    {
        this->name = name;
    }

    // speak method
    void speak() const
    {
        cout << "My name is: " << name << endl;
    }
};

int main()
{
    Animal *pAnimal = new Animal[10];

    // the 6th animal in the sequence
    pAnimal[5].setName("Kribz1k");
    pAnimal[5].speak();

    delete [] pAnimal;

    // allocating a thousand bytes
    char *pMem = new char[1000];

    delete[] pMem;

    char c = 'a';
    // incrementing from a to b
    c++;
    string name(8, c);
    cout << name << endl;

    return 0;
}


