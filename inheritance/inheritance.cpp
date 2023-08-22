// inheritance source

#include <iostream>

using namespace std;

// super class
class Animal
{
public:
    void speak()
    {
        cout << "Grrr!!!" << endl;
    }
};

// sub class
// Dog is a type of Animal
// this means Dog is basically the same as Animal
class Dog : public Animal
{
public:
    void jump()
    {
        cout << "Dog jumping!" << endl;
    }
};

// Type of Dog
class Doberman : public Dog
{
public:
    void attackCat()
    {
        cout << "Doberman attacks cat!" << endl;
    }
};

int main()
{
    Animal a;
    a.speak();

    Dog dog;
    dog.speak();
    dog.jump();

    Doberman doberman;
    doberman.speak();
    doberman.jump();
    doberman.attackCat();

    return 0;
}
