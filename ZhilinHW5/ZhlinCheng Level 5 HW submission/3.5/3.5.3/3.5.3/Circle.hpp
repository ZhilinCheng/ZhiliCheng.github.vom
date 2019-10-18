#pragma once
#ifndef Circle_HPP
#define Circle_HPP
#include "Shape.hpp"

#include "Point.hpp"

class Circle :public Shape
{
private:
	Point p_center; // Center
	double m_radius; // Radius

public:
	// Constructors
	Circle();
	Circle(const Point& center, double r);
	Circle(const Circle& circle);
	virtual~Circle();

	// Accessing functions
	Point CentrePoint() const;
	double Radius() const;
	double Diameter() const;
	double Area() const;
	double Circumference() const;

	// setter
	void CentrePoint(const Point& newCenter);
	void Radius(double newR);

	string Tostring() const;

	// Member operator overloading
	Circle& operator = (const Circle& source); // Assignment operator
};

ostream& operator << (ostream& os, const Circle& c); // Send to ostream

#endif
