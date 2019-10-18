#ifndef ArrayException_HPP
#define ArrayException_HPP

#include <iostream>
using namespace std;

class ArrayException
{
public:
	// Constructor and destructor
	ArrayException()
	{ 
		// Default constructor
	}

	virtual ~ArrayException()
	{ 
		// Destructor
	}

	virtual string GetMessage() = 0;
};

#endif