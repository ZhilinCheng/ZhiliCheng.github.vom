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
	void X(double X)
	{
		m_x = X;
	}
	void Y(double Y)
	{
		m_y = Y;
	}
	string ToString() const;
	double Distance() const;
	double Distance(const Point& p) const;
	
};
inline double Point::X() const { return m_x; }
inline double Point::Y() const { return m_y; }
#endif


