#include "Line.hpp"
#include "Point.hpp"
#include <sstream>

Line::Line() : p1(0, 0), p2(0, 0)//constructor
{
}

Line::Line(const Point& p1, const Point& p2) : p1(p1), p2(p2)
{
}

Line::Line(const Line& line) : p1(line.p1), p2(line.p2)//copy destructor
{
}

Line::~Line()
{
}

Point Line::P1() const
{
	return p1;
}

Point Line::P2() const
{
	return p2;
}

void Line::P1(const Point& newP1)
{
	p1 = newP1;
}

void Line::P2(const Point& newP2)
{
	p2 = newP2;
}

double Line::Length() const
{
	return p1.Distance(p2);
}

string Line::Tostring() const
{
	stringstream stream;

	stream << "Line: " << p1.Tostring() << "-" << p2.Tostring();

	return stream.str();
}

Line& Line::operator = (const Line& source)
{ 
	// Assignment operator.
	if (this == &source)
	{
		return *this;
	}

	p1 = source.p1;
	p2 = source.p2;

	return *this;
}

ostream& operator << (ostream& os, const Line& l)
// Send to ostream
{ 
	os << l.Tostring() << endl;

	return os;
}