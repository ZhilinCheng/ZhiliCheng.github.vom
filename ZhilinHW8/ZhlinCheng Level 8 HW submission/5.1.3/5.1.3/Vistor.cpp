#include "Visitor.hpp"
Visitor::Visitor() : boost::static_visitor<void>()
{ 
	// Default constructor
}
Visitor::Visitor(const Visitor& source) : boost::static_visitor<void>(source)
{ 
	// Copy constructor
	m_dx = source.m_dx;
	m_dy = source.m_dy;
}
Visitor::Visitor(double xValue, double yValue) : boost::static_visitor<void>()
{
	// Constructor accepting x- and y-coordinates
	m_dx = xValue;
	m_dy = yValue;
}
Visitor::~Visitor()
{ 
	// Destructor
}
Visitor&Visitor::operator = (const Visitor& source) // Assignment operator
{
	if (this == &source)
	{
		return *this;
	}
	Visitor::operator = (source);
	m_dx = source.m_dx;
	m_dy = source.m_dy;

	return *this;
}
void Visitor::operator () (Point& p) const
{ 
	p.X(p.X() + m_dx);
	p.Y(p.Y() + m_dy);
}
void Visitor::operator () (Line& l) const
{
	Point p1 = l.P1();
	Point p2 = l.P2();
	p1.X(p1.X() + m_dx);
	p1.Y(p1.Y() + m_dy);
	p2.X(p2.X() + m_dx);
	p2.Y(p2.Y() + m_dy);
	l.P1(p1);
	l.P2(p2);
}
void Visitor::operator () (Circle& c) const
{ 
	// () operator for Circle
	Point center = c.CentrePoint();
	center.X(center.X() + m_dx);
	center.Y(center.Y() + m_dy);

	c.CentrePoint(center);
}