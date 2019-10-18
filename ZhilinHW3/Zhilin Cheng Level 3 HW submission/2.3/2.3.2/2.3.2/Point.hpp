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
	Point(const Point& point);//copy constructor
	Point(double xvalue, double yvalue);
	~Point(); // Destructor
	double GetX();
	double GetY();
	void SetX(double X);
	void SetY(double Y);
 	string Tostring();
	double DistanceOrigin();
	double Distance(const Point& p);
};
#endif
