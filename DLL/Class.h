// Fritz Ammon
// Class.h
// 17 August 2017

#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

class DLL_API Class
{
public:
	static Class* create();

	~Class();

	int getId();

private:
	static int numObjects;

	Class();

	int id;
};