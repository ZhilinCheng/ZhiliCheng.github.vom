#pragma once
#ifndef Circle_Hpp
#define Circle_HPP
#include "Point.hpp"

class Circle
{
private:
	Point center; // Center
	double radius; // Radius
public:
	// Constructors
	Circle();
	Circle(const Point& center, double r);
	Circle(const Circle& circle);
	~Circle(); //desconstructor
	//below are functions
	Point CentrePoint() const;
	double Radius() const;
	double Diameter() const;
	double Area() const;
	double Circumference() const;
	// Accessing functions
	void CentrePoint(const Point& nCentervalue);
	void Radius(double Rvalue);
	string Tostring() const;
	Circle& operator = (const Circle& source); // Assignment operator
};

#endif // !_HPP
