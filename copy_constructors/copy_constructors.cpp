// copy constructors

#include <iostream>

using namespace std;

class Animal
{
private:
    // instance member
    string name;

public:
    // constructor
    Animal() { cout << "Animal created" << endl; };
	// copy constructor - copying the fields of this animal to animal1 below to the present animal which we are creating animal2
    // using "other" to pass as a reference for animal1
    Animal(const Animal& other): name(other.name) { cout << "Animal created by copying" << endl; };
    // method setName that sets that name
    void setName(string name) { this->name = name; };
    // method called speak to output the name
    void speak() { cout << "My name is: " << name << endl; };
};

int main()
{
    Animal animal1;

    // calling the copy constructor
    animal1.setName("Kribz1k");

    Animal animal2 = animal1;
    animal2.speak();
    animal2.setName("Timmy");

    animal1.speak();
    animal2.speak();

    // using the copy constructor directly
    Animal animal3(animal1);
    animal3.speak();

    return 0;
}

