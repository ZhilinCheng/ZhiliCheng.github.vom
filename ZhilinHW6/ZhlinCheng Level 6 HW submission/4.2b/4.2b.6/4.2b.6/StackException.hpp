#ifndef StackException_HPP
#define StackException_HPP

#include <sstream>
#include <iostream>
using namespace std;
class StackException
{
public:
	// Constructor and destructor
	StackException()
	{
		// Default constructor
	}
	virtual ~StackException()
	{
		// Destructor
	}
	virtual string GetMessage() = 0;
};
class StackFullException : public StackException
{
public:
	// Constructors and destructor
	StackFullException() : StackException()
	{
		// Default constructor
	}

	~StackFullException()
	{
		// Destructor
	}

	string GetMessage()
	{
		stringstream stream;

		stream << "Stack full exception.";

		return stream.str();
	}
};
class StackEmptyException : public StackException
{
public:
	// Constructors and destructor
	StackEmptyException() : StackException()
	{
		// Default constructor
	}

	~StackEmptyException()
	{
		// Destructor
	}

	string GetMessage()
	{
		stringstream stream;

		stream << "Stack empty exception.";

		return stream.str();
	}
};
#endif