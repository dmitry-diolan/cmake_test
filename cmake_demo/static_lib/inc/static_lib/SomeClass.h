#pragma once

#include <string>

namespace static_lib
{
	class SomeClass
	{
	public:
		SomeClass(std::string name);
		void PrintName();
	private:
		std::string _name;
			
	};
}