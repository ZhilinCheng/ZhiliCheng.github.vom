#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	Point p(1, 2);
	Line l(Point(2, 3), Point(2, 5));
	p.Print();
	l.Print();
	system("pause");
	return 0;
	// It prints the right information even when point and line do not have the Print() function.
}