#ifndef differencesizeexception_HPP
#define differencesizeexception_HPP

#include "ArrayException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class differencesizeexception :public ArrayException
{
public:
	differencesizeexception() :ArrayException()// Constructor
	{
	}
	~differencesizeexception()//destructor
	{
	}

	string GetMessage()
	{
		stringstream stream;
		stream << "difference size of arrays.";
		return stream.str();
	}
};

#endif

