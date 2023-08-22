// cat header source

#pragma once

class cat
{
// private is an access specifier used in classes to restrict direct access to class members from outside the class - only the class itself can access its private members.
private:
	bool happy;
// think about this as what bits of data or information can be used for a cat (blood pressure, mood, height, weight etc...)
// public class can be used in all other files that have this header file included
public:
	void makeHappy();
	void makeSad();
	void speak();
};

