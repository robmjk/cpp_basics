// strings source
// a string is a sequence of characters, like words or sentences, stored as text.

#include <iostream>
#include <string>

using namespace std;

int main()

{
	// remember = datatype - variable - value of variable
	// creating 2 string variables 
	string text1 = "Stringin' along...";
	string text2 = "Who is learning c++ right now: Kribz1k";
	
	// concatenating one string with another (concatenating means joining together / joining on)
	string text3 = text1 + text2;
	
	// outputting the string variables 
	cout << text1 << endl;
	cout << text2 << endl;
	cout << text1 << text2 << endl;
	cout << text3 << endl;
	
	
	return 0;
}