#include "Line.hpp"
#include "Point.hpp"
#include <sstream>
#include <iostream>

// Constructors and destructor
Line::Line() : Shape()
{ 
	// Default constructor
	p1 = Point(0, 0);
	p2 = Point(0, 0);
}

Line::Line(const Line& source) : Shape(source)
{ 
	// Copy constructor
	p1 = source.p1;
	p2 = source.p2;
}

// Constructor accepting two points with colon syntax.
Line::Line(const Point& val1, const Point& val2) : Shape()
{
	// Constructor accepting two points
	p1 = val1;
	p2 = val2;
}

Line::~Line()
{ 
	// Destructor
	cout << "Line destructor." << endl;
}

Line& Line::operator = (const Line& source)
{ 
	// Assignment operator.

	// Exit if same object
	if (this == &source)
	{
		return *this;
	}

	// Call base class assignment
	Shape::operator = (source);

	// Copy state
	p1 = source.p1;
	p2 = source.p2;

	return *this;
}

ostream& operator << (ostream& os, const Line& l)
{ 
	// Send to ostream

	os << "Line: " << l.p1 << l.p2 << endl;

	return os;
}

string Line::ToString() const
{
	stringstream stream;
	std::string s = Shape::ToString();

	stream <<  p1.ToString() << p2.ToString()<< s;

	return stream.str();
}

void Line::Draw() const
{
	cout << "Draw a line." << endl;
}