#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.hpp"
#include "Point.hpp"
#include <sstream>
Circle::Circle()
{

}
Circle::Circle(const Point& center, double r):center(center), radius(radius)
{

};
Circle::Circle(const Circle& circle):center(circle.center),radius(circle.radius)
{
}
Circle::~Circle()
{
}
Point Circle::CentrePoint() const
{
	return center;
}

double Circle::Radius() const
{
	return radius;
}
void Circle::CentrePoint(const Point& Centervalue)
{
 center = Centervalue;
}
void Circle::Radius(double rvalue)
{
	radius = rvalue;
}
double Circle::Diameter() const
{
	return 2.0 * radius;
}
double Circle::Area() const
{
	return M_PI * pow(radius, 2);
}
double Circle::Circumference() const
{
	return 2.0 * M_PI * radius;
}
string Circle::Tostring() const
{
	stringstream stream;
	stream << "Center" << center.ToString() << "Radius" << radius;
	return stream.str();
}


