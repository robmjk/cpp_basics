// arithmetic source

#include <iostream>

using namespace std;

 /*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precendence
 */

int main()
{
    // "casting" 7 to a double
    // casting double will actually give the true value rather than a whole
    double value1 = (double)7 / 2;
    cout << value1 << endl;

    int value2 = (int)7.3;
    cout << value2 << endl;

    // adds onto value of variable
    int value3 = 8;
    value3 += 1; // same as doing value3 = value3 + 1 or value3++;
    cout << value3 << endl;

    // divided value of variable
    int value4 = 10;
    value4 /= 5; // same as value4 = value4/5
    cout << value4 << endl;

    // % is called modular (mod) - 12 divided by 5 then take the remainder and store it in value5 - 12/5 = 2.4 = 2 --- 13/5 = 2.6 = 3
    int value5 = 12 % 5;
    cout << value5 << endl;

    // precendence
    // division and multiplication have a higher "precedence" than plus or minus - therefore they will be executed first
    double equation = (5.3 / 4) + (2 * 6);
    cout << equation << endl;

    return 0;
}
