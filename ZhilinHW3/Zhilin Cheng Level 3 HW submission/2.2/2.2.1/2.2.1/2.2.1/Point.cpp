
#include "Point.hpp"
#include <sstream>
using namespace std;
Point::Point() // Default constructor
{
}

Point::~Point() // Destructor
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
string Point::ToString()
{
	stringstream ss;
	ss << "Point(" << m_x << "," << m_y << ")";
	return ss.str();
}