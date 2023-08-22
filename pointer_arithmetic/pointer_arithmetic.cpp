// pointer arithmetic source

#include <iostream>

using namespace std;

int main()
{
	// const ensures i cannot change the amount of elements in the array
	const int NSTRINGS = 5;

	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string *pTexts = texts;

	// dereference the pointer
	// cout << *pTexts << endl;

	// incrementing in array by +3
	pTexts += 3;

	cout << *pTexts << endl;

	// going 2 back in the array
	pTexts -= 2;

	cout << *pTexts << endl;

	// array counts to 5 then stops
	string *pEnd = &texts[NSTRINGS];
	pTexts = &texts[0];

	while (pTexts != pEnd)
	{
		cout << *pTexts << endl;
		pTexts++;
	}

	// setting pTexts back to start
	pTexts = &texts[0];

	// subtracting 5 to 1, getting all the elements of the array
	long elements = (long)(pEnd - pTexts);

	// outputting the amount of elements in the array
	cout << elements << endl;

	// setting pTexts back to start
	pTexts = &texts[0];

	pTexts += NSTRINGS / 2;

	// getting middle element of the array
		cout << *pTexts << endl;

    return 0;
}
