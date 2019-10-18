#pragma once
#pragma once

#ifndef Point_Hpp
#define point_Hpp
#include <iostream>
using namespace std;
class Point
{
private:
	double m_x;// x-coordinate
	double m_y;// y-coordinate
public:
	Point();//construct
	~Point(); // Destructor
	// Accessing functions
	double GetX(); // Getter function for x-coordinate
	double GetY(); // Getter function for y-coordinate
	void SetX(double X); // Setter function for x-coordinate
	void SetY(double Y); // Setter function for y-coordinate
	string ToString();
};

#endif  
