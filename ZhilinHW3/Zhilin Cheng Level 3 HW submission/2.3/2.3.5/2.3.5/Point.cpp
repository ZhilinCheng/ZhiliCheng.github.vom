#include "Point.hpp"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;
Point::Point()
{
	cout << "Default Constructor Called." << endl;
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
double Point::X() const
{
	return m_x;
}

double Point::Y() const
{
	return m_y;
}
void Point::X(double X)
{
	m_x = X;
}
void Point::Y(double Y)
{
	m_y = Y;
}
string Point::ToString() const
{
	stringstream stream;

	stream << "Point(" << m_x << "," << m_y << ")";

	return stream.str();
}
double Point::Distance() const
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}
double Point::Distance(const Point& p) const
{
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}