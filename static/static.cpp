// static source

#include <iostream>

using namespace std;

// .h header file
class Test {
public:
    // initialization of const must be done right here
    static int const MAX = 99;
private:
    int id;
    // static means there's only ONE version of that variable shared for all other objects 
    static int count;

public:
    Test()
    {
        // count is incremented first THEN assigned to id variable whereas count++ would increment after
        id = ++count;
    }

    int getId()
    {
        return id;
    }

    static void showInfo()
    {
        cout << count << endl;
    }
};

// .cpp source intiliaze in this file
int Test::count = 0;

int main()
{
    cout << Test::MAX << endl;

    // uses the incrementation object
    Test test1;
    cout << "Object 1 ID: " << test1.getId() << endl;
    
    Test test2;
    Test::showInfo();
    cout << "Object 2 ID: " << test2.getId() << endl;

    Test test3;
    Test::showInfo();
    cout << "Object 3 ID: " << test3.getId() << endl;

    return 0;
}


