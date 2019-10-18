#include "Point.hpp"
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
Point::Point()//constructor
{
	cout << "constructor is called" << endl;
}
Point::Point(const Point&point) :m_x(point.m_x), m_y(point.m_y)//copy constructor
{
	cout << "copy constructor is called" << endl;

}
Point::Point(double xValue, double yValue) : m_x(xValue), m_y(yValue) // Constructor that accepts x- and y-coordinates

{
	cout << "Constructor Accepting x- and y-coordinates Called." << endl;
}

Point:: ~Point()//Destructor
{
	cout << "Destructor is Called" << endl;
}
double Point::GetX()
{
	return m_x;

}
double Point::GetY()
{
	return m_y;
}

void Point::SetX(double X)
{
	m_x = X;

}
void Point::SetY(double Y)
{
	m_y = Y;
}
string Point::Tostring()
{
	stringstream stream;
	stream << "Point(" << m_x << "," << m_y << ")";
	return stream.str();
}
double Point::DistanceOrigin()
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));

}
double Point::Distance(Point p)
{
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}
