// other types char and bool source

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	// remember = datatype - variable - value of variable
	// 0 = false & 1 = true - remember - bool is a data type representing a value that can be either true or false.
	bool bValue = true; 
	cout << bValue << endl; 

	// ASCII = American standard code for information interchange
	// char = character of a specific ASCII value (55 = 7 on the ASCII chart)
	char cValue = 55;
	// output the character 7 from the ASCII chart - use single quotes '' - remember this is a symbol and character not the actual value 7
	char cValue = '7';
	// casting a char to an int to find the caharacter's value
	cout << (int)cValue << endl;
	// standard output
	cout << cValue << endl;

	// size of char is 1 byte or 8 bits
	cout << "Sizeof char: " << sizeof(char) << endl;

	// getting position of i on the ASCII chart
	wchar_t wValue = 'i';
	cout << (char)wValue << endl;
	cout << "Sizeof wchar_t: " << sizeof(wchar_t) << endl;

	return 0; 
}