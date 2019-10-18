#ifndef PointArray_HPP
#define PointArray_HPP

#include "Array.cpp"
#include "Point.hpp"

class PointArray : public Array<Point>
{
public:
	// Constructors
	PointArray();
	PointArray(int size);
	PointArray(const PointArray& pp);

	// Destructor
	~PointArray();
	// Member operator overloading
	PointArray& operator = (const PointArray& source);
	// Accessing functions
	double Length() const;
};
#endif