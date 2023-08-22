// returning objects from functions source

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

// turning Animal into a reference
Animal *createAnimal()
{
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    // creating a temporary return object
    return pAnimal;
}

int main()
{
    // when allocating memory with "new" you must always make sure to de-allocate the memory explicitly
    Animal* pDog1 = new Animal();
    // calling methods on the object dog
    pDog1->setName("Toby");
    pDog1->speak();
    // de-allocate the memory that the pointer points at - always call delete if you call new
    delete pDog1;

    // returning to a temporary return value object (which was created via a above the main function)
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;

    return 0;
}

