#include <windows.h>
#include <boost/variant.hpp>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Visitor.hpp"
#include <string>
#include <iostream>
using namespace std;
typedef boost::variant<Point, Line, Circle> ShapeType;
ShapeType Create()
{
	ShapeType shape;
	cout << "shape:" << endl << "a Point; b Line; c Circle" << endl;
	char choice;
	cin >> choice;
	switch (choice)
	{
	case 'a':
		shape = Point();
		break;
	case 'b':
		shape = Line();
		break;
	case 'c':
		shape = Circle();
		break;
	default:
		break;
	}
	return shape;
}
int main()
{
	using boost::variant;
	ShapeType result = Create();
	cout << result << endl;
	try
	{
		Line l1 = boost::get<Line>(result);
	}
	catch (boost::bad_get& err)
	{
		cout << "The variant did not contain a line" << endl;
	}
	Visitor visitor(1, 2);
	boost::apply_visitor(visitor, result);
	cout << result << endl;
	system("pause");
	return 0;
}
