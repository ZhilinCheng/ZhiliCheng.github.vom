#include "Line.hpp"
#include "Point.hpp"
#include <sstream>
Line::Line() : p1(0, 0), p2(0, 0)
{

}
Line::Line(const Point& p1, const Point& p2) : p1(p1), p2(p2)
{

}
Line::Line(const Line& line) : p1(line.p1), p2(line.p2)
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
void Line::P1(const Point& P1value)
{
	p1 = P1value;
}
void Line::P2(const Point& P2value)
{
	p2 = P2value;
}
string Line::ToString() const
{
	stringstream stream;

	stream << "Line" << p1.ToString() << "and" << p2.ToString();

	return stream.str();
}
double Line::Length() const
{
	return p1.Distance(p2);
}