// variables source
// a variable is a named container for holding data that can change during program execution.

#include <iostream>

using namespace std;

int main()

{
	// remember = datatype - variable - value of variable
	// integer (int) is a number that does not have a decimal point
	// storing an integer (int) value
	// numberDogs is the variable name
	// always give variables descriptive names
	// the value 5 is allocated to the memory
	int numberDogs = 5;
	int numberCats = 7;
	int numberAnimals = numberDogs + numberCats;

	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Number of cats: " << numberCats << endl;

	// add the total of dogs and cats
	cout << "Total number of animals: " << numberDogs + numberCats << endl;

	// using new variable numberAnimals, add the total number of dogs and cats
	cout << "Total number of animals: " << numberAnimals << endl;

	// adding another dog to the variable 
	numberDogs = numberDogs + 1;
	
	// outputting text
	cout << "New dog acquired!" << endl;


	cout << "New number of dogs: " << numberDogs << endl;

	return 0;
}