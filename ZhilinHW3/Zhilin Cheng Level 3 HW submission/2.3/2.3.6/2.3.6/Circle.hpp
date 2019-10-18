#pragma once
#ifndef Circle_HPP
#define Circle_HPP
#include "Point.hpp"
class Circle
{
private:
	Point center;
	double radius;
public:
	Circle();
	Circle(const Point&center, double r);
	Circle(const Circle& circle);
	~Circle();
	Point CentrePoint() const;
	double Radius() const;
    void CentrePoint(const Point& Centervalue);
	void Radius(double rvalue);
	double Diameter() const;
	double Area() const;
	double Circumference() const;//not mention setter function;
	string Tostring() const;

};
#endif