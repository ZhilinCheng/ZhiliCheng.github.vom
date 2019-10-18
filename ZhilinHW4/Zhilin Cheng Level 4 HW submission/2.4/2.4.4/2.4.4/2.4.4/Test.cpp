#include "Point.hpp"
#include "Line.hpp"
 #include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	// Test Point class.
	Point p1(5, 3);
	Point p2(3, 3);
	cout << p1.Tostring() << ", " << p2.Tostring() << endl;
	// Negate the coordinates.
	Point p3 = -p1;
	cout << "input" << p1.Tostring() << "output " << p3.Tostring() << endl;
	// Scale the coordinates.
	p3 = p1 * 3;
	cout << "input" << p1.Tostring() << "output " << p3.Tostring() << endl;
	// Add coordinates.
	p3 = p1 + p2;
	// Equally compare operator.
	cout << "whether" << p1.Tostring() << "is equal to" << p2.Tostring() << "result" << (p1 == p2) << endl;
	// Assignment operator.
	p3 = p1;
	cout << "assign the value of " << p1.Tostring() << "to" << p3.Tostring() << endl;
	// Scale the coordinates & assign.
	p3 *= 3.0;
	cout << "input" << p1.Tostring() << "output " << p3.Tostring() << endl;

	// Test Line class.
	// Assignment operator.

	const Point p4(0, 0);
	const Point p5(2, 3);
	Line line(p4, p5);
	cout << "l1ne: " << endl << line.Tostring() << endl;
	Line line1 = line;
	cout << "assign the value of " << line.Tostring() << "to" << line1.Tostring() << endl;
	system("pause");
	return 0;
}

