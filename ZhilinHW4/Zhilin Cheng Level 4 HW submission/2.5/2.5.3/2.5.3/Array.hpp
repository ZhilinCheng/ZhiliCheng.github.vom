#pragma once
#ifndef Array_HPP
#define Array_HPP

#include "Point.hpp"
using namespace std;
class Array
{
private:
	Point* m_data;//Add a data member for a dynamic C array of Point objects
	int m_size;//Add a data member for the size of the array.

public:
	// Constructor s
	Array();
	Array(int size);//Add a default constructor that allocates for example 10 elements.
	Array(const Array& pp);//Add a copy constructor
	~Array();//Add a destructor
 	//Accessing functions
	int Size() const;
	Point& GetElement(int index) const;
	void SetElement(int index, const Point& newPoint);
	// Member operator overloading
	Array& operator = (const Array& source);
	Point& operator [] (int index);//can read and write
	const Point& operator [] (int index) const;//can read

};
#endif