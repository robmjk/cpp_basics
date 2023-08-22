// encapsulation source

#include <iostream>

using namespace std;

class Frog
{
    // instance data private first
private:
    string name;

    // private methods second
private:
    string getName() { return name; }

    // public methods third
public:
    Frog(string name) : name(name) {}
    void info() { cout << "My name is: " << getName() << endl; }
};

int main()
{
    Frog frog("Kribz1k");

    frog.info();

    return 0;
}

