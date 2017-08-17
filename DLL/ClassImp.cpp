// Fritz Ammon
// ClassImp.cpp
// 17 August 2017

#include "Class.h"

int Class::numObjects = 0;

Class* Class::create()
{
	return (Class::numObjects == 0) ? new Class() : nullptr;
}

Class::Class() : id(++Class::numObjects) {}

Class::~Class()
{
	numObjects--;
}

int Class::getId()
{
	return this->id;
}