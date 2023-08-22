// const source

#include <iostream>

using namespace std;

class Animal
{
private:
    string name;

public:
    void setName(string name) { this->name = name; };
    void speak() { cout << "My name is: " << name << endl; };
};

int main()
{
    // it is a constant - so therefore variable cannot be changed
    const double PI = 3.141592;
    cout << PI << endl;

    Animal animal;
    animal.setName("Kribz1k");
    animal.speak();
     
    int value = 8;

    int *pValue = &value;

    cout << *pValue << endl;

    int number = 11;
    pValue = &number; // Error with this: int const *pValue = &value;
    *pValue = 12; // Error with this: const int *pValue = &value;

    cout << *pValue << endl;

    return 0;
}
