#pragma once
#ifndef Point_HPP
#define Point_HPP
#include "Shape.hpp"
#include <iostream>
using namespace std;

class Point : public Shape
{
private:
	double m_x; // x-coordinate
	double m_y; // y-coordinate

public:
	// Constructors
	Point();
	Point(const Point& point);
	Point(double xValue, double yValue);
	explicit Point(double value);
	  ~ Point();

	// Accessing functions
	double X() const;
	double Y() const;

	// settter
	void X(double newX);
	void Y(double newY);

	string Tostring() const;

	// Functionality
	double Distance() const;
	double Distance(const Point& p) const;

	// Member operator overloading
 
	Point& operator = (const Point& source); // Assignment operator
 	friend ostream& operator << (ostream& os, const Point& p); // Send to ostream

};


#endif
