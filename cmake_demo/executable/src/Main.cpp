// CMakeVS2022Test.cpp : Defines the entry point for the application.
//


#include <iostream>
using namespace std;

#include "LocalFunction.h"
#include <static_lib/SomeClass.h>


int main()
{
	static_lib::SomeClass c("some_name");
	c.PrintName();
	local_function();
	cout << "Hello CMake." << endl;
	return 0;
}
