#include "Line.hpp"
#include "Point.hpp"
#include <sstream>


Line::Line() :Shape()//:p1(0, 0), p2(0, 0) error //constructor
{
	p1 = Point(0, 0);
	p2 = Point(0, 0);
}

Line::Line(const Point& p1value, const Point& p2value) :Shape()
// Constructor accepting two points  

{
	p1 = p1value;
	p2 = p2value;
}

Line::Line(const Line& line) :Shape(line) //copy destructor
{
	p1 = line.p1;
	p2 = line.p2;
}
Line::~Line()// Destructor
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
	Shape::operator = (source);

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
