#include "Point.hpp"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;
Point::Point()
{
	cout << "constructor is called" << endl;

}
Point::Point(const Point&point) :m_x(point.m_x), m_y(point.m_y)
{
	cout << "copy constructor is called" << endl;

}
Point::Point(double xValue, double yValue) : m_x(xValue), m_y(yValue)  
{
	cout << "Constructor Accepting x- and y-coordinates Called." << endl;
}
Point:: ~Point()
{
	cout << "Destructor is Called" << endl;

}
double Point::X()
{
	return m_x;
}

double Point::Y()
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
string Point::Tostring()
{
	stringstream stream;
	stream << "Point(" << m_x << "," << m_y << ")";
	return stream.str();
}
double Point::Distance()
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}
double Point::Distance(const Point& p)
{
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}