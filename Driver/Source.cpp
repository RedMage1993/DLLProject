// Fritz Ammon
// Source.cpp
// 17 August 2017

#include <iostream>
#include "Class.h"

using std::cout;
using std::cin;

int main()
{
	Class *myClass = Class::create();

	if (myClass != nullptr)
	{
		cout << myClass->getId();
	}
	
	Class *mySecondClass = Class::create();

	if (mySecondClass != nullptr)
	{
		cout << mySecondClass->getId();
	}

	cin.get();

	return 0;
}