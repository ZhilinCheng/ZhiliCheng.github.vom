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
	// Constructors and destructor
	Point(); // Default constructor
	Point(const Point& source); // Copy constructor
	Point(double xValue, double yValue); // Constructor accepting x- and y-coordinates
	~Point(); // Destructor

	// Member operator overloading
	Point& operator = (const Point& source); // Assignment operator

	// Global operator overloading
	friend ostream& operator << (ostream& os, const Point& p); // Send to ostream

	string ToString() const;

	// Functionalities
	void Draw() const;
	double Distance(const Point& p) const;
};

#endif
