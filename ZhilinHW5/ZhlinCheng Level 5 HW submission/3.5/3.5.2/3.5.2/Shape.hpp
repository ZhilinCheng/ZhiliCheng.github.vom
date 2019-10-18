#pragma once
#ifndef Shape_HPP
#define Shape_HPP
#include <iostream>
using namespace std;

class Shape
{
private:
	int m_id;//Add a data member for an id number of type int.
public:
	Shape(); // Constructor
	Shape(const Shape& source); // Copy constructor
	~Shape(); // Destructor

 // Operator overloading
	Shape& operator = (const Shape& source); // Assignment operator
	string ToString() const;

	// Accessing functions
	int ID() const;
};

#endif