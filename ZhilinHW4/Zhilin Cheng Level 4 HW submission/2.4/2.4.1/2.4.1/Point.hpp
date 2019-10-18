#pragma once
#ifndef Point_HPP
#define Point_HPP
#include <iostream>
using namespace std;
class Point 
{
private:
	double m_x; // x-coordinate
	double m_y; // y-coordinate
public:
	Point();//constructor
	Point(const Point&Point);//copy consgtructor
	Point(double X, double Y);
	~Point();//Destructor
	double X() const;//getter X
	double Y() const;//getter Y
	void X(double X);//setter X
	void Y(double Y);//setter Y
	string Tostring() const;
	double Distance() const;
	double Distance(const Point& p) const;
	// Member operator overloading
	Point operator - () const; // Negate the coordinates.
	Point operator * (double factor) const; // Scale the coordinates.
	Point operator + (const Point& p) const; // Add coordinates.
	bool operator == (const Point& p) const; // Equally compare operator.
	Point& operator = (const Point& source); // Assignment operator.
	Point& operator *= (double factor); // Scale the coordinates & assign.


};
#endif