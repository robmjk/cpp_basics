// animals header source

#include <iostream>

using namespace std;

namespace animals {

	const string DOGNAME = "Kribz1k";

	class Dog
	{
	public:
		Dog();
		virtual ~Dog();
		void speak();
	};

}

