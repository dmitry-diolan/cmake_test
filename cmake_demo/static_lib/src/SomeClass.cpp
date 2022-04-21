#include "static_lib/SomeClass.h"

#include <iostream>
using namespace std;

namespace static_lib
{

	SomeClass::SomeClass(std::string name)
		: _name (name)
	{

	}

	void SomeClass::PrintName()
	{
		cout << "SomeClass with the name " << _name << endl;
	}

}


