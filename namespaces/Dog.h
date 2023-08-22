// dog header

#include <iostream>

using namespace std;

namespace dogs {

	const string DOGNAME = "Toby";

	class Dog
	{
	public:
		Dog();
		virtual ~Dog();
		void speak();
	};

}

