#pragma once
#ifndef Point_Hpp
#define Point_Hpp

#include <iostream>
using namespace std;
class Point
{
private:
	double m_x;// x-coordinate
	double m_y;// y-coordinate
public:
	Point();
	~Point();

	double GetX();
	double GetY();
	void SetX(double X);
	void SetY(double Y);
	string Tostring();
	double DistanceOrigin();
	double Distance(Point p);
	
};
#endif