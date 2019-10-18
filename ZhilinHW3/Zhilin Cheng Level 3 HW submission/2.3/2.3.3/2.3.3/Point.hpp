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
	Point(const Point&point);
	Point(double Xvalue, double Yvalue);
	~Point();
	double X();
	double Y();
	void X(double X);
	void Y(double Y);
	string Tostring();
	double Distance();
	double Distance(const Point & p);
};

#endif // !

