#include "Point.hpp"
#include <sstream>
#include <cmath>
using namespace std;
Point::Point()
{

}
Point::~Point()
{

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
