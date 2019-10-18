#pragma once
#ifndef Point_HPP
#define Point_HPP
#include <iostream>
using namespace std;
class Point
{
private:
	double m_x;
	double m_y;
public:
	Point();
	Point(const Point& point);
	Point(double Xvalue, double Yvalue);
	~Point();
	double X() const;
	double Y() const;
	void X(double X);
	void Y(double Y);
	string ToString() const;
	double Distance() const;
	double Distance(const Point& p) const;
};

#endif


